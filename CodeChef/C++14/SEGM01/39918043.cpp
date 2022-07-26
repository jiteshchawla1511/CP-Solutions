#include <iostream>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    cin >> s;
	    ll count = 0;
	    
	    for(ll i=0;i<s.length();i++)
	    {
	        ll j;
	        if(s[i] == '1')
	        {
	            j = i;
	            while(s[j] == '1')
	                j++;
	            count++;
	            i=j;
	        }
	    }
	    if(count == 1)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
