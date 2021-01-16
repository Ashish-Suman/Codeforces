    #include<iostream>
     
    using namespace std;
     
    void solve(){
        int n, k;
        cin>>n>>k;
        int p[k], temp[k+1];
        for(int i = 0; i <= k; i++)
        	temp[i] = 0;
        int count = k-1;
        for(int i = n; i > 0; i--){
            int t = (i>k) ? k - (i%k) : i;
            if(temp[t] == 1)
                continue;
            else{
                temp[t] = 1;
                p[count--] = t;
            }
        }
        for(int i = 0; i < k; i++)
            cout<<p[i]<<" ";
        cout<<endl;
    }
     
    int main(){
        int t;
        cin>>t;
        while(t--){
            solve();
        }
    }
