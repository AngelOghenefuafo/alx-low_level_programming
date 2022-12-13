#!/usr/bin/python3
from ctypes import *

so_file = "100-operations.so"

my_function = CDLL(so_file)

print(type(my_function))
print(my_function.add(5, 9)

        print("Done")
