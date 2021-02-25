#include <bits/stdc++.h>

using namespace std;


void solve(){
	int k, q;
	cin>>k>>q;
	long long int a[k+1], b[k+2], c, d, e, f, g, temp;
	a[0] = b[0] = 0;
	for(int i = 1; i < k; i++)
		cin>>a[i];
	for(int i = 1; i < k+1; i++)
		cin>>b[i];
	cin>>c>>d>>e>>f>>g;	
	vector<long long int> G, F;
	for(int i = 0; i < k+1; i++){
		cin>>temp;
		F.push_back(temp);
	}
	for(int i = 0; i < k+1; i++){
		cin>>temp;
		G.push_back(temp);
	}
	long long int x1, x2, y1, y2, m, p, ghigh = k, fhigh = k;
	while(q--){
		cin>>x1>>x2>>y1>>y2>>m>>p;
		if(ghigh < max(y2, x2)){
			for(ghigh = ghigh+1; ghigh<max(y2, x2); ghigh++)
				G.push_back(c*G[ghigh-k] + d*G[ghigh-k-1] + e*pow(ghigh, k) + pow(f, ghigh + 2) + g);
		}
		if(fhigh < max(y2, x2)){
			for(fhigh = fhigh+1; fhigh < max(y2, x2); fhigh++)
				F.push_back()
		}
	}
}

int main(){
	solve();
	return 0;
}


