#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> arr[i][j];
    }
    int prev = 0;
    for (int i = 0; i < n; i++) {
        int cur = 0;
        for (int j = 0; j < m; j++) {
            cur += arr[i][j];
        }
        if (prev > cur) {
            arr[i - 1].swap(arr[i]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
}
