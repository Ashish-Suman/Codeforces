#include<bits/stdc++.h>

using namespace std;

void solve()
{
	int n, m;
	cin>>n>>m;
	string c;
	cin>>c;
	vector<int> mx(n+1, -INT_MAX), mn(n+1, INT_MAX), v(n+1);	
	v[0] = 0;	mx[0] = 0; 	mn[0] = 0;
	for(int j = 1; j <= n; j++)
		{
			
			v[j] = v[j-1] + (c[j-1] == '+' ? 1 : -1);
			mx[j] = max(mx[j-1], v[j]);
			mn[j] = min(mn[j-1], v[j]);
//			cout<<"v = " <<j<<" "<<v[j]<<endl;
		}
		
	for(int i = 0; i < m; i++)
	{
		int l, r;
		cin>>l>>r;
		int effect = v[r] - v[l-1];
		int pos = n>r ? mx[n]-effect : 0, neg = n>r ? mn[n] - effect : 0;
//		cout<<pos<<"  "<<neg<<"   "<<effect<<endl;
		pos = max(mx[l-1], pos);
		neg = l > 1 ? min(mn[l-1], neg):0;
		neg = (l != r && l != n-1 ? neg: mn[l-1]);
//		cout<<pos<<"  "<<neg<<"  "<<v[r]<<endl;
		cout<<pos-neg + 1<<"   "<<endl;
	}
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
