#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    priority_queue<int, vector<int>, greater<int>> array;

    int A, B;
    cin >> A >> B;

    for (int i = 0; i < A + B; ++i) {
        int temp;
        cin >> temp;

        array.push(temp);
    }

    for (int i = 0; i < A + B; ++i) {
        cout << array.top() << ' ';
        array.pop();
    }
}