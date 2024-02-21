#!/usr/bin/python3
""" Define island perimetre function"""


def island_perimeter(grid):
    """Compute the perimeter of the island described in the grid."""
    num_rows = len(grid)
    num_cols = len(grid[0])

    perimeter = 0

    for i in range(num_rows):
        for j in range(num_cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
