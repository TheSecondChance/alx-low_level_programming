#!/usr/bin/python3

"""island"""


def island_number(grid):
    """
    Returns the number of an island
    1 represents land zone
    0 represents water zone"""
    number = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    number += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    number += 1
                if j == 0 or grid[i][j - 1] == 0:
                    number += 1
                if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
                    number += 1
    return number
