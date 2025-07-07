#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> array(N);
    for (int i = 0; i < N; ++i) {
        int s, e;
        cin >> s >> e;
        array[i] = {s, e};
    }

    sort(array.begin(), array.end());

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(array[0].second);

    for (int i = 1; i < N; ++i) {
        if (array[i].first >= pq.top()) {
            pq.pop();
        }
        pq.push(array[i].second);
    }

    cout << pq.size() << endl;
}