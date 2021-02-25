
#include <iostream>

using namespace std;

void solve()
{
	 // triplet: a^2 + b^2 = c^2 
    int a, b, c = 0, limit, ans = 0;
	cin>>limit;
	 
  
    // loop from 2 to max_limitit 
    int m = 2, n = 1; 
  
    // Limiting c would limit 
    // all a, b and c 
    while (c < limit) { 
  
        // now loop on j from 1 to i-1 
  
            // Evaluate and print triplets using 
            // the relation between a, b and c 
            a = m * m - n * n; 
            b = 2 * m * n; 
            c = m * m + n * n; 

            if (c > limit) 
                break; 
           	if(c-b == 1)
  				ans++;
  
//            printf("%d %d %d\n", a, b, c); 
        
        m++; 
        n++;
    } 
    cout<<ans<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
		solve();

	return 0;
}
