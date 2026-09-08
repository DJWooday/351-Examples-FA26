#include <iostream>
#include <cmath>

int main() {
    float timer = 10000;
    while (timer > 0) {
        timer -= .1;
        if (timer < -100)
            break;
    }
    std::cout << timer << std::endl;

    float xPos = 5.5, triggerSpot = 15;
    while (true) {
        xPos += .1;
        if (fabs(xPos - triggerSpot) < .001)
            std::cout << "Die" << std::endl;

        if (xPos > 100) break;
    }
    std::cout << xPos << std::endl;

    int testScores[5] = {100, 22, 57, 89, 22};
    std::cout << testScores[5] << std::endl;

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