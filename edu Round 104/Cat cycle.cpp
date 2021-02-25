#include <iostream>

using namespace std;

void solve()
{
	int n, k;
	cin>>n>>k;
	if(n%2 == 0){
		cout<<(k%(n+1))<<endl;
		return;
	}
	
}

int main() {
	int t;
	cin>>t;
	while(t--)
		solve();

	return 0;
}
