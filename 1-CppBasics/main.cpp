#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;
#define HOURLY_RATE 10.5

//const float HOURLY_RATE = 10.5f;
unsigned short hoursWorked;
float taxRate = .18;
char message[] = "You have made: ";

int main() {
    // pay calc
    hoursWorked = 30;
    float totalPay = 10.5 * hoursWorked * (1-taxRate);
    std::cout << message << totalPay << std::endl;






    // String manip
    std::string myName = "Jason";
    std::string notMyName = myName;
    notMyName[0] = 'M'; // Unlike Java string, c++ string is mutable
    std::cout << notMyName << std::endl;
    std::cout << myName + " is a different name." << std::endl;

    std::cout << (notMyName == myName) << std::endl;






    // String functions
    std::string dndClass = "MindFlayer";
    int start = dndClass.find("soul");
    std::cout << start << std::endl;
    unsigned long otherStart = dndClass.find("soul");
    std::cout << otherStart << std::endl;





    // String 'at' out of index
    std::string fullName = "Jason Woodworth";
    int lastInitialIndex = fullName.find(" ");
    char lastInitialChar = fullName[++lastInitialIndex];
    std::cout << lastInitialChar << std::endl;
    //Line below finds some garbage
    fullName[lastInitialIndex+30] = '9';
    std::cout << fullName[lastInitialIndex+30] << std::endl;
    // Line below throws an error bc out of range!
    //std::cout << fullName.at(lastInitialIndex+30) << std::endl;

    // Output formatting
    cout << "Groceries: " << 43.25 << 21.56 << endl;
    cout << "Groceries: " << setw(8) << 43.25 << setw(8) << 21.56 << endl;

    // float formatting
    cout << 123213422421.67 << endl;
    cout << fixed << 123213422421.67 << endl;

    // float truncation
    cout << defaultfloat << endl; // reset from fixed
    cout << 65.0 << endl;
    cout << showpoint << 65.0 << endl;
    cout << setprecision(3) << 65.3432 << endl;
    cout << fixed << setprecision(3) << 65.3432 << endl;

/*
    int hoursWorked;
    float payRate;
    cout << "Enter the hours worked, then payrate: ";
    cin >> hoursWorked >> payRate;
    cout << "You made: " << (hoursWorked * payRate) << endl;

    string message;
    cin >> message;
    cout << message << endl;
    // Notice no return? Implicitly returns 0.

    cin.ignore(333, '\n');
    */

    // Getline
    cout << "Welcome to taco bell, can I take your order?" << endl;
    string order;
    getline(cin, order);
    cout << "Your order is: " << order << " is that right?" << endl;

    int day, month, year;
    cout << "Enter your bday for taco bell rewards: (format mm/dd/yyyy)";
    string bdayInput;
    getline(cin, bdayInput);

    stringstream ss(bdayInput);

    string temp;
    getline(ss, temp, '/');
    stringstream(temp) >> month;
    getline(ss, temp, '/');
    stringstream(temp) >> day;
    getline(ss, temp);
    stringstream(temp) >> year;

    cout << "Day after your bday is " << (day + 1) << "!" << endl;
}