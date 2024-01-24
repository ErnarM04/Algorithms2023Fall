#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> v;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    long long min = 1e12;
    for (int i = 0; i < n-1; i++) {
        if (v[i + 1] - v[i] < min) {
            min = v[i + 1] - v[i];
        }
    }
    for (int i = 0; i < n - 1; i++) {
        if (v[i + 1] - v[i] == min) {
            cout << v[i] << " " << v[i+1] << " ";
        }
    }
}
