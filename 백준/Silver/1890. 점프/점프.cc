#include <iostream>
#include <vector>
using namespace std;

int N;
vector<vector<int>> board;
vector<vector<long long>> dp;

long long checkingBoard(int i, int j) {
    if (i >= N || j >= N) return 0;
    if (i == N - 1 && j == N - 1) return 1;

    if (dp[i][j] != -1) return dp[i][j];

    int jump = board[i][j];
    if (jump == 0) return dp[i][j] = 0;

    dp[i][j] = checkingBoard(i + jump, j) + checkingBoard(i, j + jump);
    return dp[i][j];
}

int main() {
    cin >> N;

    board.resize(N, vector<int>(N));
    dp.resize(N, vector<long long>(N, -1));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j)
            cin >> board[i][j];
    }
    
    cout << checkingBoard(0, 0) << endl;
}