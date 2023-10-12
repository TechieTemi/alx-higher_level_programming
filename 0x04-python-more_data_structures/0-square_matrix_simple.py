def square_matrix_simple(matrix=[]):
    #get the len of the row and colmn in the matrix
    len_row = len(matrix)
    len_column = len(matrix[0])
    #Declare an empty list that you will store the calculated value to later
    square_matrix = []
    # loop through the row and column usimg range and nested loop
    for i in range(len_row):
        row = []
        for j in range(len_column):
            # Do your computing here
            row.append(matrix[i][j] ** 2)
        square_matrix.append(row)
    return square_matrix
