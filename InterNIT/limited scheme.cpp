#include <bits/stdc++.h>

using namespace std;


void solve(){
	long long int n, m;	
	cin>>n>>m;
	long long int u[m+1], v[m+1], t[m+1];		//u, v, t values for ith train
	vector< vector<pair<long long int, long long int> > > r;	//ith station is rechable by which station
	for(int i = 1; i <= m; i++){
		cin>>u[i]>>v[i]>>t[i];
		r[v[i]].push_back(make_pair(u[i], t[i]));
	}
		
	
}

int main(){
	solve();
	return 0;
}


