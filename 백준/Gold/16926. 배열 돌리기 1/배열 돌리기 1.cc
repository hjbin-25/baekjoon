#include <iostream>
using namespace std;

int main() {
    int N, M, R;
    cin >> N >> M >> R;

    int** arr = new int*[N];
    for (int i = 0; i < N; i++) {
        arr[i] = new int[M];
        
        for (int j = 0; j < M; j++)
            cin >> arr[i][j];
    }

    int layers = min(N, M) / 2;

    for (int l = 0; l < layers; l++) {
        int h = N - 2 * l;
        int w = M - 2 * l;
        int len = 2 * (h + w) - 4;
        int rot = R % len;

        for (int r = 0; r < rot; r++) {
            int temp = arr[l][l];

            for (int j = l; j < M - l - 1; j++)
                arr[l][j] = arr[l][j + 1];

            for (int i = l; i < N - l - 1; i++)
                arr[i][M - l - 1] = arr[i + 1][M - l - 1];

            for (int j = M - l - 1; j > l; j--)
                arr[N - l - 1][j] = arr[N - l - 1][j - 1];

            for (int i = N - l - 1; i > l; i--)
                arr[i][l] = arr[i - 1][l];

            arr[l + 1][l] = temp;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }

    for (int i = 0; i < N; i++)
        delete[] arr[i];
    delete[] arr;

    return 0;
}