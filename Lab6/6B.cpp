#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	vector<int> v1, v2;
	for(int i = 0; i < n; i++){
		int a; cin >> a;
		v1.push_back(a);
	}
	for(int i = 0; i < m; i++){
		int a; cin >> a;
		v2.push_back(a);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(v1[i] == v2[j]){
				cout << v1[i] << " ";
				v1.erase(v1.begin()+i);
				v2.erase(v2.begin()+j);
				i--; j--;
			}
		}
	}
}

