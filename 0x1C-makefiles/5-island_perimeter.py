#!/usr/bin/python3
"""
island_perimeter algo
"""


sm = 0


def fdefunc(i, grid):
    """fdefunc"""

    global sm
    listindex = []
    for j in range(len(grid[i])):
        if grid[i][j] == 1:
            sm = sm + 3
            listindex.append(j)
            if grid[i][j + 1] == 1 and grid[i][j - 1] == 1:
                sm = sm - 1
            elif grid[i][j + 1] == 0 and grid[i][j - 1] == 0:
                sm = sm + 1
    return listindex


def island_perimeter(grid):
    """ island_perimeter """
    global sm
    if not grid:
        return 0
    for incr in range(len(grid)):
        a = fdefunc(incr, grid)
        for j in range(len(grid[incr])):
            if grid[incr - 1][j] == 1 and j in a:
                sm = sm - 2
    return(sm)
