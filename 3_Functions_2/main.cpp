#include <iostream>
#include <cmath>
using namespace  std;

float distance(float x1, float y1, float x2=0, float y2=0) {
    return sqrt(pow(x2- x1, 2) + pow(y2- y1, 2));
}
float distance(float p1[], float p2[]) {
    return sqrt(pow(p2[0]- p1[0], 2) + pow(p2[1]- p1[1], 2));
}

void printStrBackwards(string str) {
    for (int i = str.length()- 1; i >= 0; i--)
        cout << str[i];
}

void swap(int&, int&);

void even(int);
void odd(int y)
{
    if ((y % 2) != 0) cout << "Odd";
    else even(y);
}
void even(int x)
{
    if ((x % 2) == 0) cout << "Even";
    else odd(x);
}

double& maxnum(double a, double b) {
    return a > b ? a : b;
}

template <typename swappable>
void swapthese(swappable& x, swappable& y) {
    swappable t = x;
    x = y;
    y = t;
}

int main() {
    cout << distance(0, 0, 1, 1) + 5 << endl;
    cout << distance(3, 5, 5) << endl;
    printStrBackwards("tacocat"); cout << endl;

    int a = 5, b = 10, c = 12;
    swap(a, b);
    cout << "In main: " << &a << ", " << &b << ", " << &c <<  endl;


    double x=3, y=7;
    double& max = maxnum(x, y);
    max += 10;
    printStrBackwards("word"); cout << endl;
    cout << max << endl;

    swapthese<double>(x, y);
    long long u = 2, v = 10;
    swapthese(u, v);
}

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "In swap: " << &x << ", " << &y << endl;
}