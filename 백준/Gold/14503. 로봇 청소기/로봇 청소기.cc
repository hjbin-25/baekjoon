#include <iostream>
using namespace std;

int n, m;
int r, c, d;
int board[50][50];
int cnt = 0;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

bool isIn(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

void simulate() {
    while (true) {
        if (board[r][c] == 0) {
            board[r][c] = 2;
            cnt++;
        }

        bool moved = false;
        for (int i = 0; i < 4; i++) {
            d = (d + 3) % 4;
            int nx = r + dx[d];
            int ny = c + dy[d];

            if (isIn(nx, ny) && board[nx][ny] == 0) {
                r = nx;
                c = ny;
                moved = true;
                break;
            }
        }

        if (moved)
            continue;

        int back = (d + 2) % 4;
        int bx = r + dx[back];
        int by = c + dy[back];

        if (isIn(bx, by) && board[bx][by] != 1) {
            r = bx;
            c = by;
        } else {
            break;
        }
    }
}

int main() {
    cin >> n >> m;
    cin >> r >> c >> d;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> board[i][j];

    simulate();

    cout << cnt << endl;
}