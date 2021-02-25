#include <iostream>

using namespace std;

int main() {
	int tc;
	cin >> tc;										// Reading input from STDIN
			// Writing output to STDOUT
	while(tc--){
		long long n, t, l = -1e11, r = 1e11;
		string c;
		cin>>n;
		for(int i = 0; i < n; i++)
		{
		//	cin.ignore();
			cin>>c>>t;
			if(c == "L")
			{
				if(r > t)
					r = t;
			}
			else
			{
				if(l < t)
					l = t;
			}
		}
		if(l == -1e10 || r == 1e10 || r-l < 2)
			cout<<-1<<endl;
		else
			cout<<r-l-1<<endl;
	}
	return 0;
}
