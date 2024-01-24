#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<long long> v1, v2;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        v1.push_back(a);
    }
    for (int i = 0; i < m; i++) {
        int a; cin >> a;
        v2.push_back(a);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    int a = 0, b = 0;
    while (b < m) {
        while (a < n) {
            if (v1[a] > v2[b]) {
                break;
            }
            else if (v2[b] == v1[a]) {
                cout << v1[a] << " ";
            }
            a++;
        }
        b++;
    }
}
