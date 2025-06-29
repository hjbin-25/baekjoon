#include <iostream>
using namespace std;

int main() {
    int firmQuantity[6] = {1, 1, 2, 2, 2, 8};
    
    int inputArray[6];
    
    for (int i = 0; i < 6; ++i) {
        int temp;
        
        cin >> temp;
        
        inputArray[i] = temp;
    }
    
    for (int i = 0; i < 6; ++i) {
        cout << firmQuantity[i] - inputArray[i] << ' ';
    }
}