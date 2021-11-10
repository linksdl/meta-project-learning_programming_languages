import matplotlib.pyplot as plt
import numpy as np
import random



def make_noisy_data(width, intercept, sigma, num_points):
    xs = np.linspace(-5, 5, num_points)
    ys = width * xs ** 2 + intercept
    ys_noisy = ys + np.random.normal(0.0, sigma, num_points)
    return xs, ys, ys_noisy


def evaluate_parabola(xs, width, intercept):
    return np.polyval([width, 0, intercept], xs)


def calculate_error(ys_actual, ys_model, sigma):
    return ((ys_actual - ys_model) ** 2 / (2 * sigma ** 2)) / (ys_actual)


def draw_system_and_model(xs, ys, ys_noisy, sigma, ys_fit=None):
    fig, ax = plt.subplots()
    ax.plot(xs, ys, label="Generating parabola")
    ax.errorbar(xs, ys_noisy, fmt='o', yerr=sigma, label="Noisy data")
    if ys_fit is not None:
        ax.plot(xs, ys_fit, '--', label="Fit")
    ax.legend()
    return fig, ax



# sigma = 2.0
# num_points = 10

# xs, ys, ys_noisy = make_noisy_data(width, intercept, sigma, num_points)
# draw_system_and_model(xs, ys, ys_noisy, sigma)


# Total number of points we're going to sample (start out with at least 10^4)
num_sample_points = 10

# Weight factor in front of the random step
step_size = 0.01

sigma = 2.0

# Provide an initial guess for the width and intercept parameters
# As we move the walker around, we'll use these same lists to
# store our new values so that we can visualize the path later!
# (Note: that means you'll want to append new values to these lists!)
widths = [2]
intercepts = [2]
width = 2
intercept = 2

# caculate the x0^2 initial guess
def calculate_x0(sigma):
    w_0 = widths[0]
    i_0 = intercepts[0]
    x_square_guess = calculate_error(w_0, i_0, sigma)
    return x_square_guess

x_0_init_guess = calculate_x0(sigma)
print("The x0^2 guess:", x_0_init_guess)


# caculate the P
def fun_probability(x_0_sqr, x_1_sqr):
    var_p = np.e ** x_0_sqr / np.e ** x_1_sqr
    var_r = random.random()
    return var_r, var_p

x_0_guess = x_0_init_guess
x_1_guess = 0
w_0 = widths[0]
i_0 = intercepts[0]


## PUT YOUR CODE HERE ###
for i in range(num_sample_points):
    w_new = w_0 + np.random.normal() * step_size
    i_new = i_0 + np.random.normal() * step_size

    x_1_guess = calculate_error(w_new, i_new, sigma)
    var_r, var_p = fun_probability(-x_0_guess, -x_1_guess)
    if var_r < var_p:
        widths.append(w_new)
        intercepts.append(i_new)
        w_0 = w_new
        i_0 = i_new
        x_0_guess = x_1_guess
    elif var_p > 1:
        widths.append(w_new)
        intercepts.append(i_new)
        w_0 = w_new
        i_0 = i_new
        x_0_guess = x_1_guess
    else:
        widths = [2]
        intercepts = [2]
        w_0 = widths[0]
        i_0 = intercepts[0]
        plt.figure()
        plt.plot(widths, intercepts)
        plt.annotate('start', xy=(widths[0], intercepts[0]))
        plt.annotate('stop', xy=(widths[-1], intercepts[-1]))
        plt.annotate('X', xy=(width, intercept))



plt.xlabel('Width parameter')
plt.ylabel('Intercept parameter')
plt.title('Markov Chain for estimate of optimal width, intercept')
plt.show()


