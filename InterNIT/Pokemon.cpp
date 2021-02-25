#include <bits/stdc++.h>

using namespace std;


void solve(){
	int n;	
	cin>>n;
	int f[n+1] = { 0 }, d[n+1] = {0}; 		//defeated by number of non-favorite
	string temp;
	for(int i = 1; i <= n; i++){
		cin>>temp;
		if(temp == "F")
			f[i] = 1;
//		cout<<f[i]<<" ";		
	}
//	cout<<endl;
	int t;
	
	for(int i = 2; i <= n; i++){
		cin>>t;
		d[i] += d[t] + 1*(!f[t]);
		if(i == 2 && t != 1 && !f[1]){
			d[i] = 1;
		}
//		cout<<"( "<<i<<" "<<d[i]<<"), ";
	}
//	cout<<endl;
	t = 0;	//sum
	for(int i = 1; i <= n; i++){
		t += d[i]*f[i];
	}
	cout<<t;
	
}

int main(){
	solve();
	return 0;
}

/*6
N N F N F N
3 1 2 4 1*/


