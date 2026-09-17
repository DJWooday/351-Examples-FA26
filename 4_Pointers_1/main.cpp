#include <iostream>
using namespace std;

int main() {
    int jason = 25;
    int* andrew = &jason;
    cout << *andrew << endl;

    int bou = 67;
    int* madison = &bou;
    cout << *madison << endl;

    char noah = 'w';
    char* juan = &noah;

    int** landon = &madison;
    cout << landon << endl;
    cout << *landon << endl;
    cout << **landon << endl;

    int*** evan = &landon;
    cout << ***evan << endl;

    int funnyNumbers[] = {420, 8647, 69};
    int* jermar = funnyNumbers;
    cout << *(jermar+2) << endl;

    int funnierNumbers[] = {69, 80085, 666};
    int* tyson = funnierNumbers;

    landon = &tyson;
    cout << *(*landon+20) << endl;



    return 0;
}