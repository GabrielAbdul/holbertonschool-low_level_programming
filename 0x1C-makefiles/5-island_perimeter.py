#!/usr/bin/python3
'''Island perimeter module'''


def island_perimeter(grid):
    '''returns the perimeter of the island described in grid'''

    if grid is None or len(grid) < 1 or len(grid[0]) < 1:
        return

    grid_height = len(grid)
    grid_len = len(grid[0])
    perimeter = 0

    for height in range(grid_height):          # y = vertical
        for length in range(grid_len):         # x = horizontal
            if grid[height][length] == 1:
                try:
                    # CHECK UP ^
                    if grid[height - 1][length] == 0:
                        perimeter += 1
                except IndexError:
                    pass

                try:
                    # CHECK DOWN v
                    if grid[height + 1][length] == 0:
                        perimeter += 1
                except IndexError:
                    pass

                try:
                    # CHECK LEFT <
                    if grid[height][length - 1] == 0:
                        perimeter += 1
                except IndexError:
                    pass

                try:
                    # CHECK RIGHT >
                    if grid[height][length + 1] == 0:
                        perimeter += 1
                except IndexError:
                    pass

    return perimeter
