#include <bits/stdc++.h>
using namespace std;
int main() {
	string s1, s2;
	cin >> s1 >> s2;
	for(int i = 0; i < s1.size(); i++){
		if(s1[i] == '#'){
			s1.erase(i-1,2);
			i -= 2;
		}
	}
	for(int i = 0; i < s2.size(); i++){
		if(s2[i] == '#'){
			s2.erase(i-1,2);
			i -= 2;
		}
	}
	if(s1 == s2) cout << "Yes";
	else cout << "No";
}

