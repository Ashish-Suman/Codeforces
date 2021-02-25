#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; 
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int a0[n], a1[n], ans = 1,j = 0, k = 0;
    a0[j++] = a[0];
    for(int i = 1; i < n; i++){
        if(a0[j-1] == a[i] || k == 0){
            a1[k++] = a[i];
            if(k == 1 || a1[k-1] != a1[k-2])
                ans++;
        }
        else{
            a0[j++] = a[i];
            ans++;
        }
        // cout<<ans;
    }
    cout<<ans;
}

int main(){
	int t; 
	// cin>>t;
	// while(t--)
		solve();
	return 0;
}




