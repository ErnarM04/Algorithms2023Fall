#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, k, sum;
	int max = 0;
	cin >> n >> k;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	for(int i = 0; i < n; i++){
		sum = arr[i];
		for(int j = i+1; j < n; j++){
			sum += arr[j];
			if(sum == k){
				if(max < j-i+1) max = j-i+1;
			}
		}
	}
	cout << max;
}

