#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    len_row = len(matrix)
    len_column = len(matrix[0])
    square_matrix = []
    for i in range(len_row):
        row = []
        for j in range(len_column):
            row.append(matrix[i][j] ** 2)
        square_matrix.append(row)
    return square_matrix
