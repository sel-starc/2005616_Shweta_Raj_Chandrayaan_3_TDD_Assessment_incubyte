#include "Spacecraft.h"
using namespace std;

class Spacecraft {
    int x, y, z;
    char dir;
    char lastDir;
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
        if (dir == 'U') z += step;
        else if (dir == 'D') z -= step;
        else {
            if (dir == 'N') y += step;
            else if (dir == 'S') y -= step;
            else if (dir == 'E') x += step;
            else if (dir == 'W') x -= step;
            lastDir = dir;  
        }
    }
    void turn(char cmd) {
                 if (dir == 'U' || dir == 'D') {
                         if (cmd == 'l') {
                            dir = leftTurn(lastDir);
                lastDir = dir;
            } else if (cmd == 'r') {
                  dir = rightTurn(lastDir);
                lastDir = dir;
            } else if (cmd == 'u') dir = 'U';
            else if (cmd == 'd') dir = 'D';
        } else {
            if (cmd == 'l') {
                              dir = leftTurn(dir);
                lastDir = dir;
            } else if (cmd == 'r') {
                dir = rightTurn(dir);
                           lastDir = dir;
            } else if (cmd == 'u') dir = 'U';
            else if (cmd == 'd') dir = 'D';
        }
    }
    char leftTurn(char d) {
        if (d == 'N') return 'W';
        if (d == 'W') return 'S';
        if (d == 'S') return 'E';
        if (d == 'E') return 'N';
        return d;
    }
    char rightTurn(char d) {
        if (d == 'N') return 'E';
        if (d == 'E') return 'S';
        if (d == 'S') return 'W';
        if (d == 'W') return 'N';
        return d;
    }
    void showPosition() {
                     cout << "Current Position: (" << x << ", " << y << ", " << z << ")\n";
     cout << "Facing Direction: " << dir << "\n";
    }
};
int main() {
    int startX, startY, startZ;char startDir;
                 string cmds;
 cout << "Enter start x, y, z: ";
 cin >> startX >> startY >> startZ;
        cout << "Enter start direction: ";
            cin >> startDir;
        cout << "Enter command string: ";
    cin >> cmds;
             Spacecraft craft(startX, startY, startZ, startDir);
    for (size_t i = 0; i<cmds.length(); i++) {
                 craft.doCommand(cmds[i]);
    }
                  craft.showPosition();
    return 0;
}

