#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    priority_queue<int, vector<int>, greater<int>> array;

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int temp;
        cin >> temp;

        if (temp != 0)
            array.push(temp);
        else {
            if (array.size() <= 0)
                cout << 0 << '\n';
            else {
                cout << array.top() << '\n';
                array.pop();
            }
        }
    }
}