#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	int k; cin >> k;
	while(k--){
		int a; cin >> a;
		int cnt = 0, sum = 0;
		for(int i = 0; i < n; i++){
			if(arr[i] <= a){
				cnt++;
				sum += arr[i];
			}
		}
		cout << cnt << " " << sum << endl;
	}
}

