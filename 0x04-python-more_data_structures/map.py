# Define a list of numbers
numbers = [1, 2, 3, 4, 5]

# Use map() with a lambda function to double each number in the list
doubled_numbers =map(lambda x: x * 2, numbers)

# Convert the map object to a list to see the results
doubled_numbers_list = list(doubled_numbers)

print(doubled_numbers_list)  # Output: [2, 4, 6, 8, 10]

