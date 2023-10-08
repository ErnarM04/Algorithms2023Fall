#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	int max = 0;
	int mode[n];
	for(int i = 0; i < n; i++){
		int cnt = 0;
		for(int j = i+1; j < n; j++){
			if(arr[i] == arr[j]) cnt++;
		}
		mode[i] = cnt;
		if(cnt > max) max = cnt;
	}
	vector<int> v;
	for(int i = 0; i < n; i++){
		if(mode[i] == max){
			v.push_back(arr[i]);
		}
	}
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
}

