#include <bits/stdc++.h>
using namespace std;
int main() {
	string a, b;
	cin >> a >> b;
	string c = a;
	int cnt = 1;
	while(a.find(b) > a.size()){
		cnt++;
		a = a + c;
	}
	cout << cnt;
}

