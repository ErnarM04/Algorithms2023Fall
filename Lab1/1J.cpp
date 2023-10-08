#include <bits/stdc++.h>
using namespace std;
int main() {
	deque<int> d;
	char c;
	int n;
	while(c != '!'){
		cin >> c;
		if(c == '+'){
			cin >> n;
			d.push_front(n);
		} 
		if(c == '-'){
			cin >> n;
			d.push_back(n);
		}
		if(c == '*'){
			if(d.empty()){
				cout << "error" << endl;
			}
			else{
				cout << d.front() + d.back() << endl;
				if(!d.empty())d.pop_back();
				if(!d.empty())d.pop_front();
			}
		}
	}
}

