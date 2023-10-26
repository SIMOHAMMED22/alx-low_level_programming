#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
    grid (List[List[int]]): A grid where 0 represents water zones and 1 represents land zones.

    Returns:
    int: The perimeter of the island.

    Constraints:
    - Grid is rectangular, and its width and height don't exceed 100.
    - Grid is completely surrounded by water, and there is one island (or nothing).
    - The island doesn't have "lakes" (water inside that isn't connected to the water around the island).
    """
    if not grid:
        return 0

    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                # Check for adjacent land or boundaries and increment the perimeter
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                if row == rows - 1 or grid[row + 1][col] == 0:
                    perimeter += 1
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1
                if col == cols - 1 or grid[row][col + 1] == 0:
                    perimeter += 1

    return perimeter

# Example usage:
grid = [[0, 1, 0, 0],
        [1, 1, 1, 0],
        [0, 1, 0, 0],
        [1, 1, 0, 0]]
perimeter = island_perimeter(grid)
print("Perimeter of the island:", perimeter)
