#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int hashCode(string s){
	int hash = 0;
	for(int i = 0; i < s.size(); i++){
		int power = pow(11, i);
		int mod = 1e9 + 7;
		hash += (s[i] - 47) * power % mod;
		hash %= mod;
	}
	return hash;
}

int main(){
	string s = "123456789";
	int n = 123456789;
	cout << hashCode(s);
	cout << stoi(s);
}

