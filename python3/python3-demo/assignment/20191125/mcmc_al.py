import matplotlib.pyplot as plt
import numpy as np
import random


def make_noisy_data(width, intercept, sigma, num_points):
    xs = np.linspace(-5, 5, num_points)
    ys = width * xs ** 2 + intercept
    ys_noisy = ys + np.random.normal(0.0, sigma, num_points)

    return xs, ys, ys_noisy

def evaluate_parabola(xs, width, intercept):
    """
    Evaluate a polynomial model at a set of x coordinates.
    Returns an array of y coordinates.
    """
    return np.polyval([width, 0, intercept], xs)


def calculate_error(ys_actual, ys_model, sigma):
    """
    Calculate the chi-squared error between two sets of data
    """
    return ((ys_actual - ys_model) ** 2 / (2 * sigma ** 2)).sum() / (ys_actual.size)


def draw_system_and_model(xs, ys, ys_noisy, sigma, ys_fit=None):
    fig, ax = plt.subplots()
    ax.plot(xs, ys, label="Generating parabola")
    ax.errorbar(xs, ys_noisy, fmt='o', yerr=sigma, label="Noisy data")
    if ys_fit is not None:
        ax.plot(xs, ys_fit, '--', label="Fit")

    ax.legend()
    return fig, ax


def chi_square(width, intercept, sigma, num_points):
    xs, ys, ys_noisy = make_noisy_data(width, intercept, sigma, num_points)
    x_chi_squared = calculate_error(ys_noisy, ys, sigma)
    return x_chi_squared


# caculate the P
def fun_probability(x_0_sqr, x_1_sqr):
    var_p = np.e ** x_0_sqr / np.e ** x_1_sqr
    var_r = random.random()
    return var_r, var_p


# fig, ax = draw_system_and_model(xs, ys, ys_noisy, sigma)
# plt.show()

# Total number of points we're going to sample (start out with at least 10^4)
num_sample_points = 100000

# Weight factor in front of the random step
step_size = 0.1

# Provide an initial guess for the width and intercept parameters
# As we move the walker around, we'll use these same lists to
# store our new values so that we can visualize the path later!
# (Note: that means you'll want to append new values to these lists!)
widths = [0]
intercepts = [0]

w_0 = 0
i_0 = 0
sigma = 2.0
num_points = 10

x_chi_init = chi_square(w_0, i_0, sigma, num_points)

# PUT YOUR CODE HERE ###
for i in range(num_sample_points):
    w0 = widths[-1]
    I0 = intercepts[-1]

    w_new = w0 + np.random.normal() * step_size
    i_new = I0 + np.random.normal() * step_size

    x_chi_new = chi_square(w_0, i_0, sigma, num_points)
    var_r, var_p = fun_probability(-x_chi_init, -x_chi_new)
    if var_r < var_p:
        widths.append(w_new)
        intercepts.append(i_new)
        w_0 = w_new
        i_0 = i_new
        x_chi_init = x_chi_new
    elif var_p > 1:
        widths.append(w_new)
        intercepts.append(i_new)
        w_0 = w_new
        i_0 = i_new
        x_chi_init = x_chi_new
    else:
        w_0 = 0
        i_0 = 0
        x_chi_init = chi_square(w_0, i_0, sigma, num_points)

plt.plot(widths, intercepts)
plt.annotate('start', xy=(widths[0], intercepts[0]))
plt.annotate('stop', xy=(widths[-1], intercepts[-1]))
plt.annotate('X', xy=(w_0, i_0))
plt.xlabel('Width parameter')
plt.ylabel('Intercept parameter')
plt.title('Markov Chain for estimate of optimal width, intercept')
plt.show()
