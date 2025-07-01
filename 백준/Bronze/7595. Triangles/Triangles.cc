#include <iostream>
using namespace std;

int main() {
    while (true) {
        int temp;
        cin >> temp;
        
        if (temp == 0)
            break;
        
        for (int i = 0; i < temp; ++i) {
            for (int j = 1; j < (i + 2); ++j) {
                cout << "*";
            }
            cout << endl;
        }
    }
}