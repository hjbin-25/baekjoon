#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> arr(N);
    
    for (int i = 0; i < N; ++i)
        cin >> arr[i];
    
    int cnt = 0;
    int maxV = 0;
    for (int i = 0; i < N; ++i) {
        if (arr[i] != 0) {
            cnt++;

            if (maxV < cnt)
                maxV = cnt;
        }
        else {
            cnt = 0;
        }
    }
    
    cout << maxV << endl;
}