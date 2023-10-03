#!/usr/bin/python3
import random
number = random.randint(-10, 10)
if (number > 0):
	result = f"{number} is positive"
elif (number == 0):
	result = f"{number}is zero"
else:
	result = f"is negative"
print(result)
