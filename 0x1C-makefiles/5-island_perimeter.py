#!/usr/bin/python3
"""
island_perimeter algo
"""


sm = 0


def fdefunc(i, grid):
    """fdefunc"""

    global sm
    listindex = []
    j = 0
    for j in range(0, len(grid[i])):
        if grid[i][j] == 1:
            sm = sm + 4
            listindex.append(j)
            if j and grid[i][j - 1] == 1:
                sm = sm - 2
    return listindex


def island_perimeter(grid):
    """ island_perimeter """
    global sm
    if not grid:
        return 0
    for incr in range(len(grid)):
        a = fdefunc(incr, grid)
        for j in range(len(grid[incr])):
            if incr and grid[incr - 1][j] == 1 and j in a:
                sm = sm - 2
    return(sm)
