#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	int max = -100000;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	for(int i = 0; i < n; i++){
		int sum = arr[i];
		for(int j = i+1; j < n; j++){
			if(sum > max) max = sum;
			sum += arr[j];
			if(sum > max) max = sum;
		}
	}
	cout << max;
}

