#include <iostream>
using namespace std;

typedef int integer;

enum State {STARTING, RUNNING, ENDING};

struct Movie {
    string title;
    int runtime;
    string cast[20];
    bool wonOscar;
};

struct Friend {
    string name;
    Movie favoriteMovie;
};
Movie EEAAO;


void printMovie(Movie m) {
    cout << m.title << endl;
    cout << m.runtime << endl;
    cout << m.wonOscar << endl;
}

union WeightU {
    long inOunces;
    int inPounds;
    float inTons;
};

struct WeightS {
    long inOunces;
    int inPounds;
    float inTons;
};

void foo() {
    static int x = 0;
    int y = 0;
    cout << ++x << " " << ++y << endl;
}

int main() {
    integer A = 10;
    State state = STARTING;

    state = (State)1;

    EEAAO.title = "Everything Everywhere All At Once";
    EEAAO.runtime = 100;

    Movie swissArmyMan;
    swissArmyMan.title = "Swiss Army Man";
    swissArmyMan.runtime = 110;
    swissArmyMan.wonOscar = false;
    printMovie(EEAAO);
    printMovie(swissArmyMan);

    int x;
    cout << "X is " << x << endl;

    Movie theDaniels[2] = {swissArmyMan, EEAAO};

    Movie* turnDownForWhat = new Movie();
    turnDownForWhat->title = "Turn Down";
    turnDownForWhat->runtime = 4;
    cout << turnDownForWhat->title;

    printMovie(*turnDownForWhat);


    Friend parker;
    parker.name = "Parker";
    Movie infinityWar;
    infinityWar.title = "Infinity War";
    infinityWar.runtime = 180;
    parker.favoriteMovie = infinityWar;


    state = RUNNING;

    WeightS weights;
    weights.inOunces = 1000;
    weights.inPounds = 5;
    weights.inTons = 5;
    WeightU weight;
    weight.inOunces = 5;
    cout << "Union weights: " << endl;
    cout << sizeof(weight) << endl;
    cout << sizeof(weights) << endl;

    cout << "Unions: " << endl;
    cout << weight.inPounds << endl;

    int i, j;
    for (int i = 0; i < 10; i++)
        cout << i;
    cout << endl << i;

    foo();
    foo();
    foo();
    foo();

    return 0;
}