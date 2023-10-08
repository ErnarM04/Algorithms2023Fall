#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	while(n--){
		int m; cin >> m;
		deque<char> unique;
		char prev;
		for(int i = 0; i < m; i++){
			char a; cin >> a;
			if(i == 0){
				unique.push_front(a);
				cout << unique.front() << " ";
			}
			else if(unique.front() != a && !unique.empty()){
				unique.push_back(a);
				cout << unique.front() << " ";
			}
			else if(unique.front() == a){
				unique.pop_front();
				prev = a;
				if(unique.empty()){
					cout << -1 << " ";
					continue;
				}
				cout << unique.front() << " ";
			}
			else if(unique.empty() && a == prev){
				cout << -1 << " ";
			}
			else if(unique.empty() && a != prev){
				unique.push_back(a);
				cout << unique.front() << " ";
			}
		}
		cout << endl;
	}
}

