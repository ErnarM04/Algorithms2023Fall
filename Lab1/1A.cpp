#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	while(n--){
		int t;
		cin >> t;
		deque<int> d;
		for(int i = t; i > 0; i--){
			d.push_front(i);
			int a = i;
			while(a--){
				d.push_front(d.back());
				d.pop_back();
			}
		}
		for(int i = 0; i < d.size(); i++) cout << d[i] << " ";
		cout << endl;
	}
}

