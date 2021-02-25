#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long int A, B;
    int n, flag = 1, temp;
    cin>>A>>B>>n;
    long long int x[n], y[n];
    for(int i = 0; i < n; i++){
        cin>>x[i];
    }
    for(int i = 0; i < n; i++){
        cin>>y[i];
        temp = ceil(1.0*y[i]/A);
        if(B-(temp - 1)*x[i] < 1)
            flag = 0;
        B -= temp*x[i];
        if(B < 1 && i < n-1)
            flag = 0;
    }
    if(flag)
        cout<<"YES\n";
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




