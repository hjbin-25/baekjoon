#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    priority_queue<int, vector<int>> array;

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int temp;
        cin >> temp;

        if (temp == 0) {
            if (array.size() > 0) {
                cout << array.top() << '\n';
                array.pop();
            }
            else
                cout << 0 << '\n';
        } else
            array.push(temp);
    }
}