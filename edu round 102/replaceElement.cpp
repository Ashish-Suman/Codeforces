#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, d;
	cin>>n>>d;
	int a[n], flag = 1;
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
		if(d < a[i])
			flag = 0;
	}
	if(flag == 1)
		cout<<"YES";
	else
	{
		int min1 = INT_MAX, min2 = INT_MAX;
		for(int i = 0; i < n; i++ )
		{
			if(min1 > a[i])
				min1 = a[i];
			if(min1 < min2)
				swap(min1, min2);
		}
		if(min1 + min2 <= d)
			cout<<"YES";
		else
			cout<<"NO";
	}
	
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
		cout<<endl;
	}
	return 0;
}
