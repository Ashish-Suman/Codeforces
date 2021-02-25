#include <bits/stdc++.h>

using namespace std;

void solve(){
	long long int n, ans = 0;
	cin>>n;
	long long int a[n], xorA[n], temp[2] = {0, 0};

	for(int i = 0; i < n; i++){
		cin>>a[i];
		if(i == 0)
			xorA[0] = a[0];
		else
		{
			xorA[i] = xorA[i - 1] ^ a[i];
		}
	}
for (int i = 0; i < n; i++) {
   
        int tmp = xorA[i];

        ans = ans + (temp[tmp%2]);
 
        if (tmp%2 == 0)
            ans++;
 
        temp[tmp%2]++;
    }

    cout<<ans<<endl;	


}

int main(){
	int t; 
	cin>>t;

	while(t--){
		solve();
	}
	return -0;
}




