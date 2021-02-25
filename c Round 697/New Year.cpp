#include <bits/stdc++.h>

using namespace std;

void solve(){
	long long int n;
	double d;
	cin>>n;
	for(int i = 0; i <= n/2020; i++){
		d = (n-2020*i)*1.00/2021;
		if(d == (int)d){
			cout<<"YES\n";
			return;
		}
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




