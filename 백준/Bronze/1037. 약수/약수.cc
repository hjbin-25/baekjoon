#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int minV = 1000000, maxV = 0;

    for (int i = 0; i < a; i++) {
        int temp;

        cin >> temp;

        if (minV > temp)
            minV = temp;
        if (maxV < temp)
            maxV = temp;
    }

    cout << maxV * minV << endl;
}