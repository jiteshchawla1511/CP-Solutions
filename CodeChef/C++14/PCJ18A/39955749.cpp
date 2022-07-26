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
	    int A[n];
	    int count = 0;
	    for(int i=0;i<n;i++)
	    {
	        cin >> A[i];
	        if(A[i] >=k)
	        {
	            count++;
	        }
	    }
	    if(count >=1)
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
