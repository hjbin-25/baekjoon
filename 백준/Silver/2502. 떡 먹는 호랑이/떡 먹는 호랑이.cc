#include <iostream>
using namespace std;

int main() {
    int d, k;
    cin >> d >> k;

    int* a = new int[d];
    int* b = new int[d];

    a[0] = 1; b[0] = 0;
    a[1] = 0; b[1] = 1;

    for (int i = 2; i < d; i++) {
        a[i] = a[i - 1] + a[i - 2];
        b[i] = b[i - 1] + b[i - 2];
    }

    for (int A = 1; A <= k; A++) {
        int B_coef = k - a[d - 1] * A;
        if (B_coef < 0) break;
        if (B_coef % b[d - 1] == 0) {
            int B = B_coef / b[d - 1];
            cout << A << endl << B << endl;
            break;
        }
    }

    delete[] a;
    delete[] b;

    return 0;
}