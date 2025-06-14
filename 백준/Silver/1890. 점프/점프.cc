#include <iostream>
#include <vector>
using namespace std;

int N;
vector<vector<int>> board;
vector<vector<long long>> visited;

long long dp(int i, int j) {
    if ((i == N - 1) && (j == N - 1)) return 1;
    if ((i >= N) || (j >= N)) return 0;

    if (board[i][j] == 0) return 0;
    
    if (visited[i][j] != -1)
        return visited[i][j];

    visited[i][j] = dp(i + board[i][j], j) + dp(i, j + board[i][j]);

    return visited[i][j];
}

int main () {
    cin >> N;

    board.resize(N, vector<int>(N));
    visited.resize(N, vector<long long>(N, -1));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j)
            cin >> board[i][j];
    }

    cout << dp(0, 0) << endl;
}