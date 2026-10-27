#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node* next;
    void addNode(T data);
};

template<typename T>
void Node<T>::addNode(T data) {

}
class Toy {
    public:
    Toy() {cout << "You got a friend in me" << endl;};
};
class Animal {
    public:
    string species;
    void Eat() {cout << "Generic Food" << endl;};
    Animal() {cout << "I'm an animal" << endl;}
};
class Cat : public Animal {
    Toy favoriteToy;
    public:
    int numWhiskers;
    Cat() { cout << "Meow" << endl;};
};


int main() {
    Cat c;

    Node<int> root;
    vector<string> toDoListV;
    toDoListV.push_back("Wake up");
    toDoListV.push_back("Eat");
    toDoListV.push_back("Pack Sack");
    toDoListV.push_back("Pet Cat");
    toDoListV.push_back("Play Slay The Spire 2");

    auto iter = toDoListV.begin();
    toDoListV.insert(iter + 4, "Homework");

    vector<float> testScores(10, 100);
    for (int i = 0; i < testScores.size(); i++) {
        testScores[i] -= rand() % 100;
    }

    vector<float> newTestScores;
    newTestScores.push_back(100);
    newTestScores.push_back(100);
    newTestScores.push_back(100);
    newTestScores.push_back(100);
    newTestScores.push_back(100);
    newTestScores.push_back(100);
    newTestScores.push_back(100);
    newTestScores.push_back(100);
    newTestScores.push_back(100);


    list<string> toDoL;
    toDoL.push_back("Cereal");
    toDoL.push_back("Second Bowl of Cereal");
    toDoL.push_back("Contemplate a third bowl of cereal");
    toDoL.push_back("Regret cereal");

    cout << toDoL.front() << endl;
    cout << toDoL.back() << endl;
    auto iter2 = toDoL.begin();
    iter2++; iter2++;
    cout << *iter2 << endl;

    map<string, float> groceries;
    groceries["Cereal"] = 5.99;
    groceries["Carrot"] = .1;
    groceries["Milk"] = 3.99;
    groceries["Cereal"] = 2.99;

    cout << groceries["Cereal"] << endl;
    for (auto p : groceries) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}