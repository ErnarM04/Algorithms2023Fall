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
	sort(v.begin(), v.end());
	for(int i = 0; i < n; i++) cout << v[i] << " ";
	int sum = 0, a = v[0];
	for(int i = 1; i < n; i++){
		a += v[i];
		cout << a << " ";
		sum += a;
	}
	cout << sum;
}

