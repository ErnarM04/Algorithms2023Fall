#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int k[n];
	int top=0;
	for(int i=0;i<n;i++){
    	cin>>k[i];
	}
	int mn = 999999;
	for(int i=0;i<n;i++){
    	int number = k[i];
    	int ans=-1;
    	for(int j=i-1;j>=top;j--){
        	if(k[j]<=number){
            	ans=k[j];
            	break;
        	}
    	}
    	mn = min(number,mn);
    	if(mn==k[i]){
        	top=i;
    	}
    	cout<<ans<<" ";
	}
	return 0;
}
