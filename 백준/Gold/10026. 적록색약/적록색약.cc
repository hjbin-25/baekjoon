#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int n;
char board[100][100];
bool visited[100][100];

const int dx[4] = {1, -1, 0, 0};
const int dy[4] = {0, 0, 1, -1};

void bfs(int x, int y, char color, bool colorBlind) {
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true;

    while (!q.empty()) {
        pair<int, int> p = q.front();
        int cx = p.first;
        int cy = p.second;
        q.pop();

        for (int dir = 0; dir < 4; ++dir) {
            int nx = cx + dx[dir];
            int ny = cy + dy[dir];

            if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
            if (visited[nx][ny]) continue;

            char nextColor = board[nx][ny];

            if (colorBlind) {
                if ((color == 'R' || color == 'G') && (nextColor == 'R' || nextColor == 'G')) {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                } else if (color == 'B' && nextColor == 'B') {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            } else {
                if (nextColor == color) {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string line;
        cin >> line;
        for (int j = 0; j < n; ++j) {
            board[i][j] = line[j];
        }
    }

    int normal = 0, blind = 0;

    fill(&visited[0][0], &visited[0][0] + 100 * 100, false);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (!visited[i][j]) {
                bfs(i, j, board[i][j], false);
                normal++;
            }

    fill(&visited[0][0], &visited[0][0] + 100 * 100, false);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (!visited[i][j]) {
                bfs(i, j, board[i][j], true);
                blind++;
            }

    cout << normal << " " << blind << "\n";
}