#include<bits/stdc++.h>

using namespace std;



void solve()
{
	int n, m;
	cin>>n>>m;
	string c;
	cin>>c;
	int a[n][3];
	int neg = 0, pos = 0, v = 0;
	for(int j = 0; j < n; j++)
		{
			a[j][0] = neg;
			a[j][1] = pos;
			a[j][2] = v;
			if(c[j] == '-')
				v -= 1;
			else
				v += 1;
			if(v < neg)
			{
				neg = v;
			}
			else if(v > pos)
				pos = v;

		}
		
	for(int i = 0; i < m; i++)
	{
		int l, r;
		cin>>l>>r;
		neg = a[l-1][0]; pos = a[l-1][1]; v = a[l-1][2];
		for(int j = r; j < n; j++)
		{
			if(c[j] == '-')
				v -= 1;
			else
				v += 1;
			if(v < neg)
			{
				neg = v;
			}
			else if(v > pos)
			{
				pos = v;
			}
		}
		cout<<(pos-neg +1)<<endl;
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
