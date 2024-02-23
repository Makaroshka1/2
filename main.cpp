#include <iostream>
using namespace std;

int main() {
    const int n = 10;
    int digitals[n],b; 
    cout << "Input elements: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> digitals[i]; 
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9; j++) {
            if (digitals[j] > digitals[j + 1]) {
                int b = digitals[j];
                digitals[j] = digitals[j + 1]; 
                digitals[j + 1] = b; 
            }
        }
    }
    cout << "Output elements: ";
    for (int i = 0; i < 10; i++) {
        cout << digitals[i] << " "; 
    }
