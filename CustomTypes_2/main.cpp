#include <iostream>
using namespace std;

typedef int littleNumber;
enum controllerType {KEYBOARD, CONTROLLER=12};
enum state {STARTING, RUNNING, STOPPING, STOPPED};

struct Movie {
    string title;
    int runtime;
    bool wonOscar;
} EEAAO;
struct Friend {
    string name;
    Movie favoriteMovie;
};

union WeightU {
    long ounces;
    int pounds;
    float tons;
};

struct WeightS {
    long ounces;
    int pounds;
    float tons;
};
void printMovie(Movie m) {
    cout << m.title << ": " << m.runtime << endl;
}

int main() {
    littleNumber number = 10;
    cout << number << endl;

    controllerType cont = CONTROLLER;
    cout << cont << endl;

    cout << EEAAO.runtime << endl;
    EEAAO.title = "Everything Everwhere All At Once";
    EEAAO.runtime = 139;
    EEAAO.wonOscar = true;
    cout << EEAAO.runtime << endl;

    Movie swissArmyMan;
    swissArmyMan.title = "Swiss Army Man";
    swissArmyMan.runtime = 110;
    swissArmyMan.wonOscar = false;

    Movie* deathOfDickLong = new Movie();
    (*deathOfDickLong).title = "Death";
    deathOfDickLong->runtime = 50;

    printMovie(EEAAO);
    printMovie(swissArmyMan);
    printMovie(*deathOfDickLong);
    //switch (cont) {
    //    case KEYBOARD:
    //        cout << "On keyboard" << endl;
    //}

    Movie theDaniels[] = {EEAAO, swissArmyMan, *deathOfDickLong};

    Friend parker;
    parker.name = "Parker";
    Movie infinityWar;
    infinityWar.title = "Infinity War";
    infinityWar.runtime = 100;
    parker.favoriteMovie = infinityWar;

    cout << &infinityWar << endl;
    cout << &(parker.favoriteMovie) << endl;

    WeightS weights;
    weights.ounces = 1000;
    weights.pounds = 10;
    weights.tons = 5;
    WeightU weightu;
    weightu.ounces = 100;
    weightu.pounds = 5;

    cout << sizeof(weights) << endl;
    cout << sizeof(weightu) << endl;

    return 0;
}