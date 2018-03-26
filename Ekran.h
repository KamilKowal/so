#include <ncurses.h>
#include <mutex>
#include <unistd.h>
class Ekran {
private:
    std::mutex draw;
public:
    Ekran();
    ~Ekran();
    void drawCegla(int,int,int);
    void removeCegla(int,int);
 void moveCegla(int,int, int);
};

