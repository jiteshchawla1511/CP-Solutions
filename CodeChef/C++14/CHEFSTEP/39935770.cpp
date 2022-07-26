#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int i,a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        if(a[i]%k==0)
	        cout<<1;
	        else
	        cout<<0;
	    }
	    cout<<endl;
	}
	return 0;
}
