# !/usr/bin/env python
# -*- coding: utf-8 -*-

"""
@Project : acs-project-pytorch_learning      
@File    : visualizing models, data and training with tensorboard.py
@Author  : Billy Sheng 
@Contact : shengdl999links@gmail.com  
@Date    : 2021/1/31 3:06 下午
@Version  : 1.0.0
@License : Apache License 2.0
@Desc    : None
"""

# Read in data and with appropriate transforms (nearly identical to the prior tutorial).
# Set up TensorBoard.
# Write to TensorBoard.
# Inspect a model architecture using TensorBoard.
# Use TensorBoard to create interactive versions of the visualizations
# we created in last tutorial, with less code

import matplotlib.pyplot as plt
import numpy as np

import torch
import torchvision
import torchvision.transforms as transforms

import torch.nn as nn
import torch.nn.functional as F
import torch.optim as optim
from torch.utils.tensorboard import SummaryWriter


transform = transforms.Compose(
    [transforms.ToTensor(), transforms.Normalize((0.5,), (0.5,))]
)

# datasets
train_set = torchvision.datasets.FashionMNIST(
    './data',
    download=True,
    train=True,
    transform=transform
)

test_set = torchvision.datasets.FashionMNIST(
    './data',
    download=True,
    train=False,
    transform=transform
)

# data loaders
train_loader = torch.utils.data.DataLoader(train_set, batch_size=4, shuffle=True, num_workers=2)

test_loader = torch.utils.data.DataLoader(test_set, batch_size=4, shuffle=False, num_workers=2)

classes = ('T-shirt/top', 'Trouser', 'Pullover', 'Dress',
           'Coat', 'Sandal', 'Shirt', 'Sneaker', 'Bag', 'Ankle Boot')


def matplotlib_show(img, one_channel=False):
    if one_channel:
        img = img.mean(dim=0)
    img = img / 2 + 0.5
    np_img = img.numpy()
    if one_channel:
        plt.imshow(np_img, cmap='Greys')
    else:
        plt.imshow(np.transpose(np_img, (1, 2, 0)))


# model architecture
class Net(nn.Module):
    def __init__(self):
        super(Net, self).__init__()
        self.conv1 = nn.Conv2d(1, 6, 5)
        self.pool = nn.MaxPool2d(2, 2)
        self.conv2 = nn.Conv2d(6, 16, 5)
        self.fc1 = nn.Linear(16 * 4 * 4, 120)
        self.fc2 = nn.Linear(120, 84)
        self.fc3 = nn.Linear(84, 10)

    def forward(self, x):
        x = self.pool(F.relu(self.conv1(x)))
        x = self.pool(F.relu(self.conv2(x)))
        x = x.view(-1, 16 * 4 * 4)
        x = F.relu(self.fc1(x))
        x = F.relu(self.fc2(x))
        x = self.fc3(x)

        return x


net = Net()
criterion = nn.CrossEntropyLoss()
optimizer = optim.SGD(net.parameters(), lr=0.001, momentum=0.9)


def freeze_support():
    writer = SummaryWriter('run/fashion_mnist_experiment_1')
    dataiter = iter(train_loader)
    images, labels = dataiter.next()

    img_grid = torchvision.utils.make_grid(images)

    matplotlib_show(img_grid, one_channel=True)

    writer.add_image('four_fashion_mnist_images', img_grid)

    writer.add_graph(net, images)
    writer.close()


if __name__ == '__main__':
    freeze_support()
