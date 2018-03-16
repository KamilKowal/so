#include "Ekran.h"
Ekran::Ekran() {
  initscr();
     if(has_colors()){
        start_color();
     	init_pair(1,COLOR_RED,COLOR_BLACK);
       	init_pair(2,COLOR_GREEN,COLOR_BLACK);
        //init_pair(3,COLOR_YELLOW,COLOR_BLACK);
       	//init_pair(4,COLOR_BLUE,COLOR_BLACK);
       	//init_pair(5,COLOR_WHITE,COLOR_BLACK);
	//init_pair(6,COLOR_BLACK,COLOR_BLACK);
		
	printw("Hello Worldd !!!");	/* Print Hello World		  */
drawCegla(15,15,1);
	refresh();			/* Print it on to the real screen */
	getch();			/* Wait for user input */
	endwin();			/* End curses mode		  */
	
	
    }else{	
	endwin();
	printf("Your terminal does not support color\n");
	exit(1);
	}

	
}
Ekran::~Ekran() {
    endwin();
}
void Ekran::drawCegla(int row, int col, int t) {
    draw.lock();
    attron(COLOR_PAIR(t));
    move(row,col);
    printw("*****");
    refresh();
    draw.unlock();
}
