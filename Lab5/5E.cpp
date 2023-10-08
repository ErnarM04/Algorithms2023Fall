#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	long a = 0;
	while(n--){
		string s;
		long q;
		cin >> s;
		if(s == "insert"){
			cin >> q;
			if(q > k) q = k;
			a += q;
		}
		else if(s == "print"){
			cout << a << endl;
			k--;
		}
	}
}

