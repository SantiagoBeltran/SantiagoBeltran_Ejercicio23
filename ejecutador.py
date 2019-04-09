import os
import numpy as np
import matplotlib.pyplot as plt


a = os.system("g++ SantiagoBeltran_Ejercicio23.cpp -o suma.x")
a = os.system("./suma.x")
print(a)