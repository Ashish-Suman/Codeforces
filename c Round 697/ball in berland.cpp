#include <bits/stdc++.h>

using namespace std;

void solve(){
	long long int a, b, k;
	cin>>a>>b>>k;
	int boy[k+1] = { 0 }, girl[k+1] = { 0 };
	map<long long int, long long int> brep, grep;
	for(int i = 1; i <= k; i++){	
			cin>>boy[i];
		brep[boy[i]]++;
	}
	for(int i = 1; i <= k; i++){	
			cin>>girl[i];
		grep[girl[i]]++;
	}
	if(k < 2){
		cout<<"0\n";
		return;
	}
	long long int count = 0;
	for(int i = 1; i <= k; i++){
		count += k-i - brep[boy[i]] - grep[girl[i]] + 2;
		if(brep[boy[i]])
			brep[boy[i]]--;
		if(grep[girl[i]])
			grep[girl[i]]--;	
	}
	cout<<count<<endl;
	
}

int main(){
	int t; 
	cin>>t;
	while(t--)
		solve();
	return 0;
}




