#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int n;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int temp1, temp2;
        
        cin >> temp1 >> temp2;
        cout << temp1 + temp2 << endl;
    }
    return 0;
}