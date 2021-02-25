#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin>>s;
    for(int i = 0; i < s.length(); i++){
        if(i%2){
            if(s[i] != 'z')
                s[i] = 'z';
            else
                s[i] = 'y';
        }
        else{
            if(s[i] != 'a')
                s[i] = 'a';
            else
                s[i] = 'b';
        }
    }
    cout<<s<<endl;
}

int main(){
	int t; 
	cin>>t;
	while(t--)
		solve();
	return 0;
}




