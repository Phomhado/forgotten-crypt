#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <unordered_map>
#include <functional>

// Function that gets the random sector number where the signal is
int sectorSignal() {
    std::srand(std::time(0));
    int sectorNum = (std::rand() % 8) + 1;

    if (sectorNum >= 5) {
       sectorNum++;
    }

    return sectorNum;
}

int moveLeft(int playerSector) {
    return playerSector - 1;
}

int moveRight(int playerSector) {
    return playerSector + 1;
}

int main() {
    int playerStartingSector = 5;
    std::cout << "Current Sector: " << playerStartingSector << std::endl;
    std::cout << moveLeft(playerStartingSector) << std::endl;
}
