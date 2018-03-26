#include "Ekran.h"
Ekran::Ekran() {
  initscr();
     if(has_colors()){
        start_color();
     	init_pair(1,COLOR_RED,COLOR_BLACK);//(nr pary, kolor czcionki, kolor tla)
       	init_pair(2,COLOR_GREEN,COLOR_BLACK);
	init_pair(6,COLOR_BLACK,COLOR_BLACK);
        //init_pair(3,COLOR_YELLOW,COLOR_BLACK);
       	//init_pair(4,COLOR_BLUE,COLOR_BLACK);
       	//init_pair(5,COLOR_WHITE,COLOR_BLACK);
	//init_pair(6,COLOR_BLACK,COLOR_BLACK);
	
	int row = 2;
	printw("Hello Worldd !!!");
	//int table[100]; 	
	//drawCegla(row,15,1);
	//drawCegla(1,15,1);
	int kolumna = rand() % 100 + 1;

	//int kolumna2 = rand() % 100 + 1;
	//drawCegla(1,kolumna2,1);
	moveCegla(row,3,2);
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
    printw("**");
    refresh();
    draw.unlock();
}
void Ekran::moveCegla(int row, int col, int t) {
for(int i = 0; i<10;i++){
	move(row,col);//przejdz do cegly
	drawCegla(row,col,6);
	attron(COLOR_PAIR(t));//zamaluj
	row++;//zwieksz wiersz
	move(row,col);//przejdz do wiersza
	drawCegla(row,col,2);//narysuj cegle
	sleep(1);//poczekaj sekunde
  	refresh();//odswiez
}
}
