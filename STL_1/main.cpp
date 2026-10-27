#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <utility>
using namespace std;

template <typename T>
class Node {
    public:
    T data;
    Node* next;
    void AddNode(Node*);
};
template<typename T>
void Node<T>::AddNode(Node *) {

}

class Record {
public:
    vector<float> grades;
    Record() {cout << "Record" << endl;};
};

class Person {
    public:
    float height;
    Person() {cout << "Person" << endl;};
};
class Student : public Person {
public:
    Record record;
    string ULID;
    Student() {cout << "Student" << endl;};
};


int main() {
    Student s;
    s.height;

    // vector<float> testScores(20);
    // for (int i = 0; i < testScores.capacity(); i++) {
    //     testScores[i] = i;
    // }
    vector<string> toDoListV;
    toDoListV.push_back("Dishes");
    toDoListV.push_back("Cook");
    toDoListV.push_back("Cry");
    toDoListV.push_back("Play Slay The Spire 2");
    toDoListV.push_back("Sleep");
    toDoListV[1] = "Order Takeout again";

    auto iter = toDoListV.begin();
    toDoListV.insert(iter+2, "eat");
    toDoListV.insert(toDoListV.end()-2, "Homework");

    toDoListV.pop_back();

    list<string> toDoL;
    toDoL.push_back("Say Something");
    toDoL.push_back("Hello");
    toDoL.push_back("Tree");
    toDoL.push_back("Pet Cat");

    cout << toDoL.back() << endl;
    auto iter2 = toDoL.begin();
    iter2++;
    cout << *iter2 << endl;

    map<string, float> groceries;
    groceries["Mango"] = 2;
    groceries["Pepto Bismol"] = 8.99;
    groceries["Milk"] = 3.49;

    cout << groceries["Milk"] << endl;

    for (auto p : groceries) {
        cout << p.first << " : " << p.second << endl;
    }
    return 0;
}