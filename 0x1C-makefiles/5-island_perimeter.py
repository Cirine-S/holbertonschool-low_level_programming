#!/usr/bin/python3
"""
5-island_perimeter
"""


def island_perimeter(grid):
    '''detect the land in the island and return perimeter'''
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if (grid[i][j]):
                perimeter += 4
                if (grid[i - 1][j] and i > 0):
                    perimeter -= 2
                if (grid[i][j - 1] and j > 0):
                    perimeter -= 2
    return perimeter
