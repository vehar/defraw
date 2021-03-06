class Game;

class Location{//base class for all game locations
protected:
    Game* parent;
public:
    Location(Game*);
    virtual ~Location();
    virtual void event(SDL_Event *) = 0;//processing an event
    virtual void draw() = 0;//do something and blit on the screen
};

class Menu:public Location{//start menu location
protected:
    Button *playbtn, *exitbtn;
    SDL_Surface *background;
public:
    Menu(Game*);
    virtual ~Menu();
    void event(SDL_Event *);
    void draw();
};

class GameLoc:public Location{
protected:
    Hero *hero;
    Enemies *enemies;
    float acc;
    char keypress[4];
    bool run;
public:
    GameLoc(Game*);
    virtual ~GameLoc();
    void event(SDL_Event *);
    void draw();
};

class EndLoc:public Location{
protected:
    Button *playbtn, *exitbtn;
    SDL_Surface *background;
public:
    EndLoc(Game*);
    virtual ~EndLoc();
    void event(SDL_Event *);
    void draw();
};
