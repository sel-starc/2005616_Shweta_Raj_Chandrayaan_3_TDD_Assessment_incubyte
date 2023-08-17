#include <iostream>
#include <string>
//#include "Spacecraft.h"
using namespace std;

class Spacecraft {
private:
    int x, y, z;
    char dir;
    char lastDir;

    char leftTurn(char d) {
        switch (d) {
            case 'N': return 'W';
            case 'W': return 'S';
            case 'S': return 'E';
            case 'E': return 'N';
            default: return d;
        }
    }

    char rightTurn(char d) {
        switch (d) {
            case 'N': return 'E';
            case 'E': return 'S';
            case 'S': return 'W';
            case 'W': return 'N';
            default: return d;
        }
    }

public:
    Spacecraft(int startX, int startY, int startZ, char startDir) : x(startX), y(startY), z(startZ), dir(startDir) {
        lastDir = startDir;
    }

    void doCommand(char cmd) {
        if (cmd == 'f' || cmd == 'b') {
            move((cmd == 'f') ? 1 : -1);
        } else {
            turn(cmd);
        }
    }

    void move(int step) {
        switch (dir) {
            case 'U': z += step; break;
            case 'D': z -= step; break;
            case 'N': y += step; break;
            case 'S': y -= step; break;
            case 'E': x += step; break;
            case 'W': x -= step; break;
        }
        if(dir != 'U' && dir != 'D') {
            lastDir = dir;
        }
    }

    void turn(char cmd) {
        switch (cmd) {
            case 'l': dir = (dir == 'U' || dir == 'D') ? leftTurn(lastDir) : leftTurn(dir); break;
            case 'r': dir = (dir == 'U' || dir == 'D') ? rightTurn(lastDir) : rightTurn(dir); break;
            case 'u': dir = 'U'; break;
            case 'd': dir = 'D'; break;
        }
        if(dir != 'U' && dir != 'D') {
            lastDir = dir;
        }
    }

    void showPosition() const {
        cout << "Current Position: (" << x << ", " << y << ", " << z << ")\n";
        cout << "Facing Direction: " << dir << "\n";
    }
};

int main() {
    int startX, startY, startZ;
    char startDir;
    string cmds;

    cout << "Enter start x, y, z: ";
    cin >> startX >> startY >> startZ;

    cout << "Enter start direction: ";
    cin >> startDir;

    if (string("NESWUD").find(startDir) == string::npos) {
        cout << "Invalid direction input!\n";
        return 1;
    }

    cout << "Enter command string: ";
    cin >> cmds;

    Spacecraft craft(startX, startY, startZ, startDir);
    for (char cmd : cmds) {
        if (string("lrudfb").find(cmd) == string::npos) {
            cout << "Invalid command detected: " << cmd << "\n";
            return 1;
        }
        craft.doCommand(cmd);
    }

    craft.showPosition();
    return 0;
}

