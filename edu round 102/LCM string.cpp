#include<bits/stdc++.h>

using namespace std;

string multip(string a, int b)
{
	string temp = a;
	for(int i = 1; i < b; i++)
		temp = temp + a;
	return temp;
}
int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers 
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

void solve()
{
	string s, t;
	cin.ignore();
	cin>>s>>t;
	int flag = 1, S = s.size(), T = t.size(), l = lcm(S,T);
	if(S < T)
	{
		swap(s, t);
		swap(S, T);
	}
	if((s = multip(s, l/S)) == multip(t, l/T))
		cout<<s;
		
	else
		cout<<-1;	
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
