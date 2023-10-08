#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
	for(int i = 0; i < s.size(); i++){
		if(s[i] != s[s.size()-1-i]){
			return false;
		}
	}
	return true;
}
int main() {
	string s;
	cin >> s;
	string s1, s2;
	for(int i = 1; i < s.size(); i++){
		if(s[0] == s[i]){
			s1 = s.copy(0, i);
			s2 = s.copy(i+1, s.size()-1-i);
		}
	}
	if(s1.size() % 2 != 0 || s2.size() % 2 != 0){
		cout << "NO";
		return 0;
	}
	cout << "YES";
}

