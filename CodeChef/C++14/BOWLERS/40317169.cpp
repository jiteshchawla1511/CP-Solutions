#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k,l;
	    cin>> n >> k >> l;
	    if(k*l < n)
	    {
	        cout<<-1<<endl;
	    }
	    else if(k==1 && n>1)
	    {
	        cout<<-1<<endl;
	    }
	    else
	    {
	        int temp = 0;
	        for(int i=0;i<n;i++)
	        {
	            
	            if(temp == k)
	            {
	                temp = 0;
	            }
	            cout<<++temp<<" ";
	        }
	        
	    }
	    cout<<endl;
	}
	return 0;
}
