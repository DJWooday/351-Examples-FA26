#include <iostream>
using namespace  std;

int main() {
    int jason = 25;
    int* kole = &jason;
    cout << kole << endl;

    int rodney = 67;
    cout << rodney << endl;
    int* jasmine = &rodney;
    cout << *jasmine << endl;

    char elle = 'w';
    cout << elle << endl;
    char* noah = &elle;
    cout << *noah << endl;

    int** ricky = &jasmine;

    cout << **ricky << endl;

    int funnyNumbers[] = {67, 69, 67};
    int* ian = funnyNumbers;
    cout << *(ian+1) << endl;
    cout << ian[1] << endl;

    int funnierNumbers[] = {80085, 420};
    int* mackenzie = funnierNumbers;
    cout << *(mackenzie+1) << endl;

    ricky = &ian;
    cout << *(*ricky + 2) << endl;
    cout << *ricky << endl;
    ricky = &mackenzie;
    cout << **ricky << endl;

    return 0;
}