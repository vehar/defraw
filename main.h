enum loc {menu,game,end};

class Game{
protected:
    Location *l;
    loc current, to;
public:
    SDL_Surface *screen;
    Score *score;
    Game();
    //~Game();
    void run();
    void change_loc(loc);
};
