#ifndef GRID_H
#define GRID_H

class Grid
{
  private:
    int cursor_x;
    int cursor_y;

  public:
    Grid(int initCursorY, int initCursorX);
    int getCursorX() { return cursor_x; }
    int getCursorY() { return cursor_y; }
    void attemptMoveLeft();
    void attemptMoveRight();
    void attemptMoveUp();
    void attemptMoveDown();
};

#endif
