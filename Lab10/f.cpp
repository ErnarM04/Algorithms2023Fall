#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	map<int, int> mp;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		mp[x] = y;
	}
	
	int a, b;
	cin >> a >> b;
	
	while(a != b){
		if(mp[a] != 0){
			a = mp[a];
		}
		else if(mp[a] == 0){
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}

