#include <iostream>
#include <string>

const float HOURLY_RATE = 10.5f;
unsigned short hoursWorked;
float taxRate = .18;
char message[] = "You have made: ";

int main() {
    // pay calc
    hoursWorked = 20;
    float totalPay = HOURLY_RATE * hoursWorked * (1-taxRate);
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
    std::cout << fullName[lastInitialIndex+30] << std::endl;
    // Line below throws an error bc out of range!
    //std::cout << fullName.at(lastInitialIndex+30) << std::endl;

    // Notice no return? Implicitly returns 0.
}