#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> hive(N);
    vector<int> sumHive(N);

    for (int i = 0; i < N; ++i) {
        cin >> hive[i];
        if (i > 0)
            sumHive[i] = sumHive[i - 1] + hive[i];
        else
            sumHive[i] = hive[i];
    }

    int ans = 0;

    for (int i = 1; i < N - 1; ++i) {
        int value = sumHive[N - 1] - hive[0] - hive[i] + sumHive[N - 1] - sumHive[i];
        ans = max(ans, value);
    }

    for (int i = 1; i < N - 1; ++i) {
        int value = sumHive[i] - hive[0] + sumHive[N - 2] - sumHive[i - 1];
        ans = max(ans, value);
    }

    for (int i = 1; i < N - 1; ++i) {
        int value = sumHive[i - 1] + sumHive[N - 2] - hive[i];
        ans = max(ans, value);
    }

    cout << ans << '\n';
}