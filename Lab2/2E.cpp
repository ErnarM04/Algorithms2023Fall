#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<string> v;
	for(int i = 0; i < n; i++){
		string s; 
		cin >> s;
		if(v.empty() || s != v.back()){
			v.push_back(s);
		}
	}
	cout << "All in all: " << v.size() << endl;
	cout << "Students:" << endl;
	for(int i = v.size()-1; i >= 0; i--) cout << v[i] << endl;
	return 0;
}

