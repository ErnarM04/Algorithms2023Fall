#include <bits/stdc++.h>
using namespace std;
int main() {
	int cnt = 0;
	deque<int> Boris;
	deque<int> Nursik;
	int n;
	for(int i = 0; i < 5; i++){
		cin >> n;
		Boris.push_back(n);
	}
	for(int i = 0; i < 5; i++){
		cin >> n;
		Nursik.push_back(n);
	}
	while(!Boris.empty() and !Nursik.empty()){
	    cnt++;
	    if(Boris.front() == 0 and Nursik.front() == 9){
	    	Boris.push_back(Nursik.front());
			Nursik.pop_front();
			Boris.push_back(Boris.front());
			Boris.pop_front();
		}
		else if(Nursik.front() == 0 and Boris.front() == 9){
			Nursik.push_back(Boris.front());
			Boris.pop_front();
			Nursik.push_back(Nursik.front());
			Nursik.pop_front();
		}
		else if(Boris.front() > Nursik.front()){
	    	Boris.push_back(Nursik.front());
			Nursik.pop_front();
			Boris.push_back(Boris.front());
			Boris.pop_front();
		}
		else if(Boris.front() < Nursik.front()){
	    	Nursik.push_back(Boris.front());
			Boris.pop_front();
			Nursik.push_back(Nursik.front());
			Nursik.pop_front();
		}
	}
	if(Boris.empty()) cout << "Nursik " << cnt;
	else cout << "Boris " << cnt; 
}

