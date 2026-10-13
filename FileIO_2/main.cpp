#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream output;
    output.open("scores.txt");
    output << "Paul " << 88 << endl;
    output.close();

    ifstream input;
    input.open("scores.txt");
    if (input.fail()) return 0;
    string name; float score;
    input >> name >> score;
    input.close();

    cout << name << " " << score << endl;

    fstream file;
    file.open("scores.txt", ios::out | ios::app);
    file << "Jeremy " << 1 << endl;
    file.close();

    cout << ios::out << " " << ios::app << endl;
    cout << (ios::out | ios::app);
    return 0;
}