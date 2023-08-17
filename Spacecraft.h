// #include <iostream>
// using namespace std;

class Spacecraft {
    int x, y, z;
    char dir;
    char lastDir;
public:
    Spacecraft(int startX, int startY, int startZ, char startDir);
    void doCommand(char cmd);
    void showPosition();

    char leftTurn(char d);
    char rightTurn(char d);
};

