#include <iostream>
using namespace std;

int main() {
    int N;
    int arr[100000];
    int cost = 0;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++) {
        if (i + 2 < N) {
            if (arr[i + 1] > arr[i + 2]) {
                int quantity = min(arr[i], arr[i + 1] - arr[i + 2]);
                
                cost += 5 * quantity;
                arr[i] -= quantity;
                arr[i + 1] -= quantity;

                quantity = min(arr[i], min(arr[i + 1], arr[i + 2]));

                cost += 7 * quantity;
                arr[i] -= quantity;
                arr[i + 1] -= quantity;
                arr[i + 2] -= quantity;
            } else {
                int quantity = min(arr[i], min(arr[i + 1], arr[i + 2]));

                cost += 7 * quantity;
                arr[i] -= quantity;
                arr[i + 1] -= quantity;
                arr[i + 2] -= quantity;

                quantity = min(arr[i], arr[i + 1]);
                
                cost += 5 * quantity;
                arr[i] -= quantity;
                arr[i + 1] -= quantity;
            }
        } else if (i + 1 < N) {
            int quantity = min(arr[i], arr[i + 1]);
            cost += 5 * quantity;
            arr[i] -= quantity;
            arr[i + 1] -= quantity;
        }

        cost += 3 * arr[i];
    }

    cout << cost << endl;
    return 0;
}