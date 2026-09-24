#include <iostream>
using namespace std;

void smooth(float *&img, int length) {
    // Dynamic allocation
    float *nPix = new float[length];
    // Smoothing
    nPix[0] = (img[0] + img[1]) / 2;
    nPix[length-1] = (img[length-1] + img[length-2]) / 2;
    for (int i = 1; i < length-1; i++)
        nPix[i] = (img[i] + img[i-1] + img[i+1]) / 3;
    // Resetting image pointer
    delete[] img;
    img = nPix;
    cout << "Inside smov: " << img[0] << endl;
    cout << "Hello World" << endl;
}

int counter = 0;
int main() {
    float* oPix = new float[]{255, 200, 100, 0, 150};
    float* img = oPix;
    cout << "Hello World" << endl;
    //cout << "Befor smooth: " << img[0] << endl;
    //cout << "Main addr: " << &img << endl;

    for (int i = 0; i < 5; i++) {
        smooth(img, 5);
    }
    cout << "After smoov: " << img[0] << endl;

    int i = 1;
    int* ip = &i;
    long long l = 3;
    long long* lp = &l;
    cout << "Pointer Arithmetic" << endl;
    cout << ip << endl;
    cout << ip+1 << endl;
    cout << sizeof(int) << endl;
    cout << lp << endl;
    cout << lp+1 << endl;
    lp += 3;
    cout << sizeof(long long) << endl;


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