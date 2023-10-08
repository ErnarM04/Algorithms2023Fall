#include <bits/stdc++.h>
using namespace std;
int main() {
	int a;
	cin >> a;
	vector<int> v;
	for(int x = 0; x < a; x++){
		int n, k;
		cin >> n >> k;
		long long arr[k];
		arr[0] = 1;
		for(int i = 1; i < k; i++){
			for(long long j = arr[i-1]+1; j < pow(10, 19); j++){
				if(j % n != 0){
					arr[i] = j;
					break;
				}
			}
		}
		v.push_back(arr[k-1]);
	}
	for(int i = 0; i < a; i++) cout << v[i] << endl;
}

