#!/usr/bin/python3
""" A function that divides all elements of a matrix"""


def matrix_divided(matrix, div):
    """
    Args:
        matrix: must be a list of lists of integers or float.
        div: is the element to divide the list with
    Raises:
        TypeError: If the matrix contains non-numbers.
        TypeError: If the matrix contains rows of different sizes.
        TypeError: If the div is not an int or float
        ZeroDivisionError: If div is 0.
    Returns:
        A new matrix
    """
    # Create a new list
    new_value = []
    # Check if the value is not integers or floats, otherwise raise a TypeError
    if not isinstance(matrix, list) or not all(
            isinstance(row, list) for row in matrix):
        raise TypeError(
                "matrix must be a matrix(list of lists) of integers/floats"
                )
    if not isinstance(div, (float, int)):
        raise TypeError("div must be a number")
    if not all(len(row) == len(matrix[0]) for row in matrix):
        raise TypeError("Each row of the matrix must have the same size")
    if div == 0:
        raise ZeroDivisionError("division by zero")

    # Loop through the old list, in order to do the computing
    for row in matrix:
        new_row = []
        for value in row:
            new_row.append(round(value / div, 2))
        new_value.append(new_row)
    return new_value
