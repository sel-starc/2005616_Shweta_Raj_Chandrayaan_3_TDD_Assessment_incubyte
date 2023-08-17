#include <iostream>
#include <string>

class Spacecraft {
    int x, y, z;
    char dir;
    char lastDir;

public:
    Spacecraft(int startX, int startY, int startZ, char startDir);

    void doCommand(char cmd);
    void move(int step);
    void turn(char cmd);
    char leftTurn(char d);
    char rightTurn(char d);
    void showPosition() const;

  
    int getX() const { return x; }
    int getY() const { return y; }
    int getZ() const { return z; }
    char getDirection() const { return dir; }
};


