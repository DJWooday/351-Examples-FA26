#include <cmath>
#include <iostream>
using namespace std;

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "In swap: " << &x << ", " << &y << endl;
}

void printStringBackwards(string str) {
    for (int i = str.length() - 1; i >= 0; i--) {
        cout << str[i];
    }
}
double& max(double a, double b) {
    return (a > b) ? a : b;
}
double dist(double x0, double y0, double x1=0, double y1=0) {
    return sqrt(pow(x1 - x0, 2) + pow(y1 - y0, 2));
}
double dist(double p1[], double p2[]) {
    return sqrt(pow(p1[0] - p2[0], 2) + pow(p1[1] - p2[1], 2));
}
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

template <typename swappable>
void swapThese(swappable& x, swappable& y) {
    swappable temp = x;
    x = y;
    y = temp;
}

int main() {
    printStringBackwards("racecar");
    cout << dist(5, 5, 6, 8) << endl;
    cout << dist(5, 5) << endl;

    int a = 5, b = 10;
    int c = 122;
    swap(a, b);
    cout << &a << endl << &b << endl << &c+2 << endl;

    double x = 10, y = 5;
    double& maxNum = max(x, y);
    maxNum += 10;
    cout << maxNum << endl;
    printStringBackwards("tacocat");
    cout << maxNum;

    double u = 3.0, v = 0.5;
    long long t = 9, i = 4;
    swapThese(u, v);
    swapThese<long long>(t, i);
}