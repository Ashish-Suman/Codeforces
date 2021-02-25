#include<bits/stdc++.h>

using namespace std;

long long int gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
void findDivisors(vector<long long int> &v, long long int n) 
{ 

    for (long long int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            // If divisors are equal, print only one 
            if (n/i == i) 
                v.push_back(i);
  
            else // Otherwise print both 
            {
            	v.push_back(i);
            	v.push_back(n/i);
			}
        } 
    } 
} 
long long int findGCD(vector<long long int> arr, long long int n) 
{ 
    long long int result = arr[0]; 
    for (int i = 1; i < n; i++) 
    { 
        result = gcd(arr[i], result); 
  
        if(result == 1) 
        { 
           return 1; 
        } 
    } 
    return result; 
} 

void solve1()
{
	long long int n , sum, mx = 0; 
	cin>>n;
	long long int a[n];	
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	sort(a, a+n);
	do{
		vector<long long int> temp;
		for(int i = 0; i < n; i += 2){
			sum = a[i] + a[i+1];
			temp.push_back(sum);
		}
		mx = max(mx, findGCD(temp, n/2));
	}while(next_permutation(a, a+n));

	cout<<mx;
	
}

void solve2()
{
	long long int n , sum = 0, mx = 1, mxno = 0, flag; 
	cin>>n;
	long long int a[n];	
	map<long long int, int> mp;
	for(int i = 0; i < n; i++){
		cin>>a[i];
		mp[a[i]]++;
		if(a[i]>mxno)
			mxno = a[i];
		sum += (a[i]*(2*n));
	}
	vector<long long int> d;
	findDivisors(d, sum);
	sort(d.begin(), d.end(), greater<long long int>());
	
	for(int i = 1; i < d.size(); i++){
		if(d[i]>2*mxno)
			continue;
		else if(d[i] == 1)
			break;
		map<long long int, int> temp(mp);
		for(int j = 0; j < n; j++){
			if(!temp[a[j]]){
				flag = 1;
				continue;
			}
			flag = 0;
			for(int k = 1; d[i]*k <= 2*mxno; k++){
					if(temp[k*d[i] - a[j]])
					{
						temp[k*d[i]-a[j]]--;
						temp[a[j]]--;
						flag = 1;
						break;
					}
					else{	
						flag = 0;
						continue;
					}
			

			}
			if(flag == 0)
				break;

		}
		if(flag == 1){
			mx = d[i];
			break;
		}
	}

	cout<<mx;
	
}
void solve(){
	long long int n , sum = 0, mx = 0, mxno = 0, flag; 
	cin>>n;
	long long int a[n];	
	map<long long int, int> temp;
	for(int i = 0; i < n; i++){
		cin>>a[i];
		temp[a[i]]++;
		sum += (a[i]*(2*n));
	}
	sort(a, a+n);
	int i = n-1;
		for(int j = n-2; j >= 0; j--){
			if(temp[a[i]] && i != j){
				if(sum%(a[i] + a[j]) == 0 && i == n-1){
					mx = (a[i]+a[j]);
					temp[a[i]]--;
					temp[a[j]]--;
					i--;
				}
				else if(sum%(a[i] + a[j]) == 0){
					mxno = a[i] + a[j];
					break;
				}
				else
					i--;
			}	
		}
		mx = gcd(mx, mxno);
		cout<<mx;
}

int main()
{
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		solve();
//		cout<<endl;
//	}
//	solve1();
	solve();
	return 0;
}
