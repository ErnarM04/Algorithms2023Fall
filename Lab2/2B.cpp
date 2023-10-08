#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	string arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	for(int i = m; i < n; i++) cout << arr[i] << " ";
	for(int i = 0; i < m; i++) cout << arr[i] << " ";
}

