#include <iostream>
using namespace std;

int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    else if(b==0)
    {
        return a;
    }
    else if(a>b)
    {
        return gcd(b,a%b);
    }
    else
    {
        return gcd(a,b%a);
    }
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int length,breadth;
	    cin >> length >> breadth;
	    int x = gcd(length,breadth);
	    
	    int ans = length*breadth/(x*x);
	    cout<<ans<<endl;
	    
	}
	
	
	return 0;
}
