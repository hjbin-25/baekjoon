#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> array;

    for (int i = 0; i < N * N; ++i) {
        int temp;
        cin >> temp;

        array.push(temp);

        if (array.size() > N)
            array.pop();
    }

    cout << array.top() << endl;
}