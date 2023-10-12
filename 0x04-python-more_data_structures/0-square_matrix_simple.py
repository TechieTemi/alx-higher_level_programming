#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    # Get the length of the rows and columns in the matrix
    len_row = len(matrix)
    len_column = len(matrix[0])

    # Declare an empty list to store the calculated values
    square_matrix = []

    # Loop through the rows and columns using nested loops
    for i in range(len_row):
        row = []
        for j in range(len_column):
            # Calculate and append the squared value
            row.append(matrix[i][j] ** 2)
        square_matrix.append(row)

    return square_matrix

