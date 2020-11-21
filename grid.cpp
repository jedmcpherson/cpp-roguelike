#include "grid.h"

Grid::Grid(int initCursorY, int initCursorX)
{
  cursor_y = initCursorY;
  cursor_x = initCursorX;
}

void Grid::attemptMoveLeft()
{
  cursor_x--;
}

void Grid::attemptMoveRight()
{
  cursor_x++;
}

void Grid::attemptMoveUp()
{
  cursor_y--;
}

void Grid::attemptMoveDown()
{
  cursor_y++;
}
