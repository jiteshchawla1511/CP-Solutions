#include <iostream>
#define ll long long int
using namespace std;


int main() {
	// your code goes here
	ll Q;
	cin >> Q;
	while(Q--)
	{
	    ll a,b;
	    cin >> a >> b;
	    if(a<b)
	    {
	        if(((b-a == 1) && a%2 != 0) || (b-a == 2))
	        {
	            cout<<"YES"<<endl;
	        }
	        else
	        {
	            cout<<"NO"<<endl;
	        }
	    }
	    else if(a>b)
	    {
	        if(((a-b == 1) && b%2 != 0) || (a-b == 2))
	        {
	            cout<<"YES"<<endl;
	        }
	        else
	        {
	            cout<<"NO"<<endl;
	        }
	    }
	    
	    
	}
	
	return 0;
}
