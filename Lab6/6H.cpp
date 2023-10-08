#include <bits/stdc++.h>
using namespace std;
char Find(int n, char arr[], char a){
	if(arr[n-1]==a)return arr[0];
	for(int i = 0; i < n; i++){
		if(arr[i] == a) return arr[i+1];
		else if(arr[i] > a) return arr[i];
	}
	return arr[0];
}
int main() {
	int n;
	cin >> n;
	char arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	char a;
	cin >> a;
	cout << Find(n, arr, a);
}

