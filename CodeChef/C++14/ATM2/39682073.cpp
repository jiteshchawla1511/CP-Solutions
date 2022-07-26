#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k;
	    cin >> n >> k;
	    int num[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> num[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(num[i] <= k)
	        {
	            cout<<1;
	            k = k - num[i];
	        }
	        else
	        {
	            cout<<0;
	        }
	    }
	    cout<<endl;
	    
	    
	}
	return 0;
}
