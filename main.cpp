#include <stdio.h>
#include <ncurses.h>
#include "grid.h"

int main()
{
	int starty = 15;
	int startx = 15;
	initscr();			/* Start curses mode 		  */
	cbreak();				/* Read input without waiting for line break */
	noecho();
	keypad(stdscr, TRUE);
	refresh();			/* Print it on to the real screen */

	Grid playerGrid = Grid(starty, startx);

	while(1)
	{
		int c = getch();

		switch(c)
		{
			case KEY_UP:
				playerGrid.attemptMoveUp();
				printw("Up arrow is pressed, %d and %d\n", playerGrid.getCursorY(), playerGrid.getCursorX());
				break;
			case KEY_DOWN:
				playerGrid.attemptMoveDown();
			  printw("Down arrow is pressed, %d and %d\n", playerGrid.getCursorY(), playerGrid.getCursorX());
				break;
			case KEY_LEFT:
				playerGrid.attemptMoveLeft();
				printw("Left arrow is pressed, %d and %d\n", playerGrid.getCursorY(), playerGrid.getCursorX());
				break;
			case KEY_RIGHT:
				playerGrid.attemptMoveRight();
				printw("Right arrow is pressed, %d and %d\n", playerGrid.getCursorY(), playerGrid.getCursorX());
				break;
		}

		move(playerGrid.getCursorY(), playerGrid.getCursorX());
		refresh();
	}
	getch();			/* Wait for user input */
	endwin();			/* End curses mode		  */

	return 0;
}
