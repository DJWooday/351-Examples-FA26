#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream output;
    output.open("scores.txt");
    output << "Paul " << 74 << endl;
    output << "Jeremy " << 98 << endl;
    output << "Max " << 1 << endl;
    output.close();

    ifstream input;
    input.open("scores.txt");
    if (input.fail()) return -1;
    string name1, name2;
    int score1, score2;
    input >> name1 >> score1;
    input.close();

    cout << name1 << " " << score1 << endl;

    fstream file;
    file.open("scores.txt", ios::out | ios::app);
    file << "Jason " << -19 << endl;
    file.close();

    cout << (ios::out | ios::app) << endl;
}