#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    long long int c,d,l;
	    cin >> c >> d >> l;
	    if( l%2 != 0)
	    {
	        cout<<"no"<<endl;
	    }
	    else
	    {
	        long long int min;
	        if((c - 2*d) <= 0)
	        {
	            min = 0;
	        }
	        else
	        {
	            min = c - 2*d;
	        }
	        long long int x = (l/4 - d);
	        if(x >= min && x <= c && (x+d)*4 == l)
	        {
	            cout<<"yes"<<endl;
	        }
	        else
	        {
	            cout<<"no"<<endl;
	        }
	        
	    }
	    
	    
	}
	return 0;
}
