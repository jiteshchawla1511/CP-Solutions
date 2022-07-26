#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin >> t;
	while(t--)
	{
	    long long int n,m,k;
	    cin >> n >> m >> k;
	    
	    if(k%2 != 0 )
	    {
	        n = n*2;
	    }
	    long long int ans = (n>m)?(n/m):(m/n);
	    cout<<ans<<endl;
	}
	return 0;
}
