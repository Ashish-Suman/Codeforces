#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n, s = 0, t = 0;	
	cin>>n;
	int a[n], max = 0, low = 0;
	vector<int> even(n), odd(n);
	for(int i = 0; i < n; i++){
		cin>>a[i];
		if(i)
			max =  a[max]<a[i] ? i : max;
		if(i%2){
			if(i != 1)
				odd[i] = odd[i-2]+a[i];
			else
				odd[i] = a[i];
		}
		else{
			if(i)
				even[i] = even[i-2] + a[i];
			else
				even[i] = a[i];
		}
	}
	while(1){
			if(max == -1){
				for(int i = low; i < n; i++){
					if(i != low)
						max =  a[max]<a[i] ? i : max;
				}
			}
			if(max == n-1){
				if(n%2)
					cout<<s+even[n-1]-(low== 0? 0: 1)*even[low-1-!(low%2)]<<" "<<t+odd[n-2]-(low== 1? 0: 1)*odd[low-1 - low%2];
				else if(max = n-1 && n%2 == 0)
					cout<<s+odd[n-1]-(low== 1? 0: 1)*odd[low-1 - low%2]<<" "<<t+even[n-2]-(low== 0? 0: 1)*even[low-1-!(low%2)];
				return;
			}
			else if(max == low){
			if(low)
				cout<<s+odd[n-1-n%2]-(low == 1? 0: 1)*odd[low-2]<<" "<<t+even[n-1-!(n%2)]-(low== 0? 0: 1)*even[low-1];
			else
				cout<<s+even[n-1-!(n%2)]-(low== 0? 0: 1)*even[low-2]<<" "<<t+odd[n-1-n%2]-(low == 1? 0: 1)*odd[low-1];
			return;
			}
			else if((!(max%2) && !(n%2)) || (max%2 && !(n%2)&& a[max-1]<=a[max+1])){
				cout<<s+even[n-2]<<" "<<t+odd[n-1];
				return;
			}
			else if(max%2 && a[max-1]>a[max+1]){
				s += odd[max] -(low== 1? 0: 1)*odd[low-1 - low%2];
				t += even[max-1]-(low== 0? 0: 1)*even[low-1-!(low%2)];
				low = max + 1;
				n = n;
			}
			else if(max%2 == 0 && a[max-1]>a[max+1]){
				s += even[max]-(low== 0? 0: 1)*even[low-1-!(low%2)];
				t += odd[max-1] -(low== 1? 0: 1)*odd[low-1 - low%2];
				low = max + 1;
				n = n;
			}
			else if(max%2 && a[max-1]<a[max+1]){
				s += odd[n-1-n%2]- (max== 1? 0: 1)*odd[max-2];
				t += even[n-1-!n%2]-(max== 0? 0: 1)*even[max-1];
				n = max;
				low = low;
			}
			else if(!max%2 && a[max-1]<a[max+1]){
				s += even[n-1-!n%2]-(max== 0? 0: 1)*even[max-1];
				t += odd[n-1-n%2]- (max== 1? 0: 1)*odd[max-2];
				n = max;
				low=low;
			}
			max = -1;
		}
	
	
}

int main(){
	solve();
	return 0;
}




