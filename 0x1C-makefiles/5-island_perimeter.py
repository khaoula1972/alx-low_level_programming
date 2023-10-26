#!/usr/bin/python3
"""
This file contains a function that calculate a perimeter
"""


def island_perimeter(grid):
    """
    this calculate island perimeter
    """
    count = 0

    for i in range (len(grid)):
        for j in range (len(grid[0])):
            if (grid[i][j] == 1):
                if i != 0:
                    if grid[i-1][j] == 0:
                        count += 1
                if i != len(grid) - 1:
                    if grid[i+1][j] == 0:
                        count += 1
                if j != 0:
                    if grid[i][j-1] == 0:
                        count += 1
                if j != len(grid[0]) - 1:
                    if grid[i][j+1] == 0:
                        count += 1
    return (count)
