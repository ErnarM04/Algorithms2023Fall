#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	string s, vowel;
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'a' || s[i] == 'e'|| s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
			vowel = vowel + s[i];
			s.erase(i,1);
			i--;
		}
	}
	sort(s.begin(), s.end());
	sort(vowel.begin(), vowel.end());
	for(int i = 0; i < vowel.size(); i++) cout << vowel[i];
	for(int i = 0; i < s.size(); i++) cout << s[i];
}

