#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    bool flag=1;
	    if(n%2==0)
	    cout<<"no"<<endl;
	    
	    else
	    {
	        int j=0;
	        for(int i=0;i<1+n/2;i++)
	        {
	            j++;
	            if(a[i]!=j)
	            {//cout<<a[i];
	                flag=0;
	                break;
	            }
	            
	        }
	        if(flag){
	        for(int i=1+n/2;i<n;i++)
	        {
	            j--;
	            if(a[i]!=j)
	            {//cout<<a[i]<<" "<<j;
	                flag=0;
	                break;
	            }
	        }
	        }
	        if(flag)
	        cout<<"yes"<<endl;
	        else
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}

