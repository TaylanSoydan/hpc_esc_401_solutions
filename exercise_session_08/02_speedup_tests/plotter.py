#!/usr/bin/python3
import matplotlib.pyplot as plt
import numpy as np

plt.plot(np.array([1.16,0.47,0.44,0.69]) / np.array([1.16]), label = "128")
plt.plot(np.array([15.2,4.95,2.36,2.09]) / np.array([15.2]), label = "256")
plt.plot(np.array([67,18,6,3.8]) / np.array([67]), label = "512")
plt.plot(np.array([722,76,23,11]) / np.array([722]), label = "1028")
plt.legend()
plt.show()

