#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; ++i)
        cin >> arr[i];

    sort(arr.begin(), arr.begin() + N);

    for (int i = 0; i < N; ++i)
        cout << arr[i] << endl;
}