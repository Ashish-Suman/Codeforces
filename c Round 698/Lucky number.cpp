#include <bits/stdc++.h>

using namespace std;

void solve(){
	long long int n, d, flag;
	cin>>n>>d;
	long long int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];	
	}
	for(int i = 0; i < n; i++){
		flag = 0;
		if(a[i] >= d*10){
			cout<<"YES\n";
			continue;
		}
		while(a[i] >= 0){
			a[i] -= d;
			if(a[i]%10 == 0){
				cout<<"YES\n";
				flag = 1;
				break;
			}
		//	cout<<a[i]<<"\t";
		}
		if(flag == 0)
			cout<<"NO\n";
	}
		
}

int main(){
	int t; 
	cin>>t;
	while(t--)
		solve();
	return 0;
}




