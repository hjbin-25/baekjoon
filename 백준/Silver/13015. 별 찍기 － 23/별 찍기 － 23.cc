#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cout << "*";
    for (int i = 0; i < 2 * n - 3; i++)
        cout << " ";
    for (int i = 0; i < n; i++)
        cout << "*";
    
    cout << endl;

    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < i + 1; j++)
            cout << " ";

        cout << "*";

        for (int j = 0; j < n - 2; j++)
            cout << " ";

        cout << "*";
        
        for (int j = i * 2 + 2; j < n * 2 - 3; j++)
            cout << " ";
        
        cout << "*";

        for (int j = 0; j < n - 2; j++)
            cout << " ";
        
        cout << "*";
        
        cout << endl;
    }

    for (int i = 0; i < n - 1; i++)
        cout << " ";
    cout << "*";
    for (int i = 0; i < n - 2; i++)
        cout << " ";
    cout << "*";
    for (int i = 0; i < n - 2; i++)
        cout << " ";
    cout << "*" << endl;


    for (int i = n - 3; i > -1; i--) {
        for (int j = 0; j < i + 1; j++)
            cout << " ";

        cout << "*";

        for (int j = 0; j < n - 2; j++)
            cout << " ";

        if (i + 1 != n)
            cout << "*";

        for (int j = i * 2 + 2; j < n * 2 - 3; j++)
            cout << " ";
        
        cout << "*";

        for (int j = 0; j < n - 2; j++)
            cout << " ";
        
        cout << "*";
        
        cout << endl;
    }

    for (int i = 0; i < n; i++)
        cout << "*";
    for (int i = 0; i < 2 * n - 3; i++)
        cout << " ";
    for (int i = 0; i < n; i++)
        cout << "*";
    
    cout << endl;
}