#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	long long arr[n][2];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 2; j++) cin >> arr[i][j];
	}
	vector<long long> res;
	for(int i = 0; i < n; i++){
		vector<long long> order;
		long long j = 1;
		while(order.size() < arr[i][1]){
			if(j % arr[i][0] != 0) order.push_back(j);
			j++;
		}
		res.push_back(order[arr[i][1]-1]);
	}
	for(int i = 0; i < n; i++) cout << res[i] << endl;
}

