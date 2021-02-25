#include <bits/stdc++.h>

using namespace std;

void solve(){
	long long int n, m, minM = 0;
	cin>>n>>m;
	long long int a[n], b[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
		minM += a[i];
	}
	vector <long long int> s1, s2;
	for(int i = 0; i < n; i++){
		cin>>b[i];
		if(b[i] == 1)
			s1.push_back(a[i]);
		else
			s2.push_back(a[i]); 
	}
		
	if(minM < m){
		cout<<"-1\n";
		return;
	}
	sort(s1.rbegin(), s1.rend());
	sort(s2.rbegin(), s2.rend());
	int size_s1 = s1.size(), size_s2 = s2.size();
	vector<long long int> sum_s2(size_s2+1);
	for(int i = 0; i < size_s2; i++)
		sum_s2[i+1] = sum_s2[i] + s2[i];

	int pos = lower_bound(sum_s2.begin(), sum_s2.end(), m) - sum_s2.begin();
	long long int count = 1e9;
	if(pos < size_s2 + 1)
		count = min(count, pos*2ll);
		
	long long int total = 0;
	for(int i = 0; i < size_s1; i++){
		long long int temp = i + 1;
		total += s1[i];
		long long int left = m - total;
		if(left>0){
			pos = lower_bound(sum_s2.begin(), sum_s2.end(), left) - sum_s2.begin();
			if(pos >= size_s2 + 1)
				continue;
			temp += pos*2ll;
		}
		count = min(count, temp);
	}	
	cout<<count<<endl;

}

int main(){
	int t; 
	cin>>t;
	while(t--)
		solve();
	return 0;
}




