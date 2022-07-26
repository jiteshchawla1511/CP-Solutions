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
	    int count = 0;
	    int A[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> A[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if((A[i]+k)%7==0)
	        {
	            count = count + 1;
	        }
	    }
	    cout<<count<<endl;
	    
	    
	}
	return 0;
}
