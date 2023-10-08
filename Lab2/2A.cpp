#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	int t, near;
	int min = 1e6;
	cin >> t;
	for(int i = 0; i < n; i++){
		if(abs(arr[i] - t) < min){
			min = abs(arr[i] - t);
			near = i;
		}
	}
	cout << near;
}

