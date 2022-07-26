#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    long long int a=0,b=0;
	    for(int i=1;i<=n;i++)
	    {
	        int x;
	        cin >> x;
	        if(i%2 == 0)
	        {
	            a += x;
	        }
	        else
	        {
	            b += x;
	        }
	    }
	    for(int i=1;i<=n;i++)
	    {
	        int y;
	        cin >> y;
	        if(i%2 == 0)
	        {
	            b += y;
	        }
	        else
	        {
	            a += y;
	        }
	    }
	    if(a>=b)
	    {
	        cout<<b<<endl;
	    }
	    else
	    {
	        cout<<a<<endl;
	    }
	}
	return 0;
}
