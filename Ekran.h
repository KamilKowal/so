#include <ncurses.h>
#include <mutex>
class Ekran {
private:
    std::mutex draw;
public:
    Ekran();
    ~Ekran();
    void drawCegla(int,int,int);
    void removeCegla(int,int);
};

