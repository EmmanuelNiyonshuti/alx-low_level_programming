#!/usr/bin/python3
"""
Module island_perimeter
Contains a function that returns the perimeter of an island
"""


def island_perimeter(grid):
    """
    Function island_perimeter
    Returns the perimeter of the island described in grid

    Args:
        grid: list of list of integers
            0 represents a water zone
            1 represents a land zone

    Returns:
        perimeter: integer
            The perimeter of the island
    """
    p = 0
    rows = len(grid)
    columns = len(grid[0])

    for i in range(rows):
        for j in range(columns):
            """Check if the cell represents land"""

            if grid[i][j] == 1:
                p += 4
                """Check if there's a land cell to the left
                 and above the current cell"""

                if i > 0 and grid[i - 1][j] == 1:
                    p -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    p -= 2
    return p


"""Time complexity Proportional to the grid size"""
