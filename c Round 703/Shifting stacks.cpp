#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n, flag = 1;
	cin>>n;
	long long int h[n], sum = 0;
	for(long long int i = 0; i < n; i++){
		cin>>h[i];
		sum += h[i];
		if(sum < i*(i+1)/2)
			flag = 0; 
	}

	if(flag){
		cout<<"YES\n";
	}
	else
		cout<<"NO\n";

	
}

int main(){
	int t; 
	cin>>t;
	while(t--)
		solve();
	return 0;
}




