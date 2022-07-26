#include <iostream>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin >> t;
	while(t--)
	{
	    ll a,b;
	    cin >> a >> b;
	    
	    ll x1 = a/2;
	    ll x2 = a - x1;
	    ll y1 = b/2;
	    ll y2 = b - y1;
	    
	    ll ans = x1*y1 + x2*y2;
	    cout<<ans<<endl;
	    
	    
	    
	    
	    
	    
	}
	return 0;
}
