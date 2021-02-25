//#include <bits/stdc++.h>
//
//using namespace std;
//
////void solve(){
////	int n;
////	cin>>n;
////	int low = 1, high = n, i, j, low1, high1;
////	while(1){
////		cout<<"? "<<low<<" "<<high<<endl;
////		cout.flush();
////		cin>>i;
////		if(high-low == 1){
////			if(i == low)
////				cout<<"! "<<high<<endl;
////			else
////				cout<<"! "<<low<<endl;
////			return;
////		}
////		if(low == i){
////			low++;
////			continue;
////		}
////		if(high == i){
////			high--;
////			continue;
////		}
////		cout<<"? "<<low<<" "<<i<<endl;
////		cout.flush();
////		cin>>j;
////		if(i == j){
////			if(j-low == 1){
////				cout<<"! "<<low<<endl;
////				return;
////			}
////			high = i - 1;
////		}
////		else{
////			if(high-i == 1){
////				cout<<"! "<<high<<endl;
////				return;
////			}
////			low = i + 1;
////		}
//////		if(j-low == 0){
//////			if(i == low)
//////				cout<<i<<endl;
//////			else
//////				cout<<low<<endl;
//////			return;
//////		}
////	
////	}
////	
////}
//void solve(){
//	int n;
//	cin>>n;
//	int low = 1, high = n, i, j;
//	while(1){
//		cout<<"? "<<low<<" "<<high<<endl;
//		cout.flush();
//		cin>>i;
//		if(low == i){
//			if(high - low == 1){
//				cout<<"! "<<high<<endl;
//				return;
//			}
//			low++;
//			continue;
//		}
//		if(high == i){
//			if(high - low == 1){
//				cout<<"! "<<low<<endl;
//				return;
//			}
//			high--;
//			continue;
//		}
//		cout<<"? "<<low<<" "<<i<<endl;
//		cout.flush();
//		cin>>j;
//		if(i == j){
//			if(low+1 == i){
//				cout<<"! "<<low<<endl;
//				return;
//			}
//			high = i - 1;
//		}
//		else{
//			if(i+1 == high){
//				cout<<"! "<<high<<endl;
//				return;
//			}
//			low = i + 1;
//		}
//		
//	}
//	
//}
//
//int main(){
//		solve();
//	return 0;
//}
//
//
//
    #include <iostream>
    using namespace std;
     
     
    #define ll long long int
     
    ll ask(ll l, ll r)
    {
    	if (l == r)
    		return -1;
    	cout << "? " << l << " " << r << endl;
    	ll x;
    	cin >> x;
    	return x;
    }
     
    int main()
    {
    	ll n;
    	cin >> n;
    	ll pos = ask(1, n);
    	if (ask(1, pos) == pos)
    	{
    		ll ini = 1, fin = pos;
    		while (ini < fin)
    		{
    			ll mid = (ini + fin + 1) / 2;
    			if (ask(mid, n) == pos)
    				ini = mid;
    			else
    				fin = mid - 1;
    		}
    		cout << "! " << ini << endl;
    	}
    	else
    	{
    		ll ini = pos, fin = n;
    		while (ini < fin)
    		{
    			ll mid = (ini + fin) / 2;
    			if (ask(1, mid) == pos)
    				fin = mid;
    			else
    				ini = mid + 1;
    		}
    		cout << "! " << ini << endl;
    	}
    }
