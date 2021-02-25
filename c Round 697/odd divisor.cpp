#include <bits/stdc++.h>

using namespace std;

void solve(){
	long long int n;
	cin>>n;
	if(n < 3){
		cout<<"NO\n";
		return;
	}
	while(n != 1){
		if(n%2){
			cout<<"YES\n";
			return;
		}
		n = n/2;
	}
	
		cout<<"NO\n";
}

int main(){
	int t; 
	cin>>t;
	while(t--)
		solve();
	return 0;
}




