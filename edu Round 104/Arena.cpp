#include <iostream>

using namespace std;

void solve()
{
	int n, minlvl = 1e9;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
		minlvl = min(a[i], minlvl);
	}
	int ans = n;
	for(int i = 0; i < n; i++){
		if(a[i] == minlvl)
			ans--;
	}
	cout<<ans<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
		solve();

	return 0;
}
