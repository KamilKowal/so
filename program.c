#include <ncurses.h>

int main()
{	
	initscr();			/* Start curses mode 		  */
	printw("Hello World !!!");
	getch();			/* Print Hello World		  */
	refresh();			/* Print it on to the real screen */
	printw("Pacaja");
	getch();			/* Wait for user input */
	endwin();			/* End curses mode		  */

	return 0;
}
