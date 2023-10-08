#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int a; cin >> a;
		v.push_back(a);
	} 
	int m;
	cin >> m;
	for(int i = 0; i < m; i++){
		int a; cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < n+m; i++) cout << v[i] << " ";
}

