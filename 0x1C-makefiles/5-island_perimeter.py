#!/usr/bin/python3
"""Find the perimeter of an island"""

def island_perimeter(grid):
    """Return perimeter of the island described in grid"""
    length_row = len(grid)
    length_column = len(grid[0])

    perimeter = 0
    connections = 0

    for x in range(0, length_row):
        for y in range(0, length_column):

            if grid[x][y] == 1:
                perimeter += 4

                if x != 0 and grid[x - 1][y] == 1:
                    connections += 1
                if y != 0 and grid[x][y-1] == 1:
                    connections += 1

    return perimeter - (connections * 2)
