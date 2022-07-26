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
	    int i,a[n],x=0;
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    int flag=1;
	    for(i=0;i<n;i++)
	    {
	     a[i]+=x;
	     if(a[i]<k)
	     {
	         cout<<"NO "<<i+1<<endl;
	         flag=0;
	         break;
	     }
	     else
	     {
	         x=abs(k-a[i]);
	     }
	    }
	    if(flag==1)
	    cout<<"YES"<<endl;
	    
	}
	return 0;
}
