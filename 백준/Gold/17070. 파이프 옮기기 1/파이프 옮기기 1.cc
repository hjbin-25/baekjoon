#include <iostream>
#include <vector>
using namespace std;

int N;
vector<vector<int>> board;
vector<vector<vector<long long>>> visited;

long long dp(int i, int j, int dir) {
    if (i >= N || j >= N || board[i][j] == 1) return 0;

    if (i == N - 1 && j == N - 1) {
        if (dir == 2) {
            if (board[i - 1][j - 1] == 0 && board[i - 1][j] == 0 && board[i][j - 1] == 0 && board[i][j] == 0)
                return 1;
        }
    
        else
            return 1;
    }

    if (visited[i][j][dir] != -1) return visited[i][j][dir];

    long long result = 0;

    if (dir == 0) {
        if (j + 1 < N && board[i][j + 1] == 0)
            result += dp(i, j + 1, 0);

        if (i + 1 < N && j + 1 < N &&
            board[i][j + 1] == 0 && board[i + 1][j] == 0 && board[i + 1][j + 1] == 0)
            result += dp(i + 1, j + 1, 2);
    }
    else if (dir == 1) {
        if (i + 1 < N && board[i + 1][j] == 0)
            result += dp(i + 1, j, 1);

        if (i + 1 < N && j + 1 < N &&
            board[i][j + 1] == 0 && board[i + 1][j] == 0 && board[i + 1][j + 1] == 0)
            result += dp(i + 1, j + 1, 2);
    }
    else {
        if (j + 1 < N && board[i][j + 1] == 0)
            result += dp(i, j + 1, 0);
        
        if (i + 1 < N && board[i + 1][j] == 0)
            result += dp(i + 1, j, 1);
        
        if (i + 1 < N && j + 1 < N &&
            board[i][j + 1] == 0 && board[i + 1][j] == 0 && board[i + 1][j + 1] == 0)
            result += dp(i + 1, j + 1, 2);
    }

    return visited[i][j][dir] = result;
}

int main() {
    cin >> N;
    board.resize(N, vector<int>(N));
    visited.resize(N, vector<vector<long long>>(N, vector<long long>(3, -1)));

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> board[i][j];

    cout << dp(0, 1, 0) << '\n';
}