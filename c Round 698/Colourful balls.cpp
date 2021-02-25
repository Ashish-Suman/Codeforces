#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin>>n;
	int a[n], o[n+1] = { 0 }, max = -1e9;
	for(int i = 0; i < n; i++){
		cin>>a[i];
		o[a[i]]++;
		if(max < o[a[i]])
			max = o[a[i]];
	}
	cout<<max<<endl;
}

int main(){
	int t; 
	cin>>t;
	while(t--)
		solve();
	return 0;
}




