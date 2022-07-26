#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int i=1;
	    int x = (i*(i+1))/2;
	    while(x<n)
	    {
	        i++;
	        x = (i*(i+1))/2;
	        
	    }
	    if(x==n)
	    {
	        cout<<i<<endl;
	    }
	    else
	    {
	        cout<<i-1<<endl;
	    }
	}
	return 0;
}
