#include <iostream>
#include <cmath>

int main() {
    float timer = 10000;
    while (timer > 0) {
        timer -= .1;

        if (timer < -100) break;
    }
    std::cout << timer << std::endl;

    float xpos = 5.4;
    float minePos = 15;
    while (true) {
        xpos += .1;
        if (fabs(minePos - xpos) < .01) {
            std::cout << "Kaboom" << std::endl;
            break;
        }

        if (xpos > 30) break;
    }
    std::cout << xpos << std::endl;

    int testScores[5] = {100, 47, 83, 11, 93};
    std::cout << testScores[5];

    char input;
    std::cin >> input;
    switch (input) {
        case 'a':
        case 'A':
            std::cout << "Go left" << std::endl;
            break;
        case 's':
            std::cout << "Go down" << std::endl;
            break;
    }

    return 0;
}