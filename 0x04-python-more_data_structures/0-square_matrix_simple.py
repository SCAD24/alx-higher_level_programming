#!/usr/bin/python3

def square_matrix_simple(matrix=[]):
    """Square the values in a matrix"""
    rows = len(matrix)
    cols = len(matrix[0])
    squared_matrix = [[0 for _ in range(cols)] for _ in range(rows)]

    for i in range(rows):
        for j in range(cols):
            squared_matrix[i][j] = matrix[i][j] ** 2

    return squared_matrix
