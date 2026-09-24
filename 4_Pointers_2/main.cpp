#include <iostream>
using namespace  std;

void smooth(float*& img, int l) {
    // Dynamic allocation
    float* nPix = new float[l];
    // Smoothing
    nPix[0] = (img[0] + img[1]) / 2;
    nPix[l-1] = (img[l-1] + img[l-2]) / 2;
    for (int i = 1; i < l-2; i++)
        nPix[i] = (nPix[i] + nPix[i-1] + nPix[i+1]) / 3;
    // Reset image pointer
    delete[] img;
    img = nPix;
    cout << "Inside: " << img[0] << endl;

    cout << "Hello World" << endl;
}

int counter = 0;
int main() {
    //int* i = 0x300;

    float* oPix = new float[]{255, 150, 200, 100, 0};
    int l = 5;
    float* img = oPix;
    cout << "Hello World" << endl;

    cout << "B4: " << img[0] << endl;

    for (int i = 0; i < 5; i++)
        smooth(img, l);

    cout << "After: " << img[0] << endl;

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