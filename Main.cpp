#include <iostream>
#include <ncurses.h>
#include "Mur.h"

int main() {
    srand((unsigned) time(NULL));
    Ekran *e1 = new Ekran();
    Mur m(e1);
    m.work();
    e1->~Ekran();
	printf("3");
    return 0;
}
