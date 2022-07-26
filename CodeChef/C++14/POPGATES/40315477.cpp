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
	    char a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    for(int i=n-1;i>=n-k;i--)
	    {
	        if(a[i] == 'H')
	        {
	            for(int j=0;j<n;j++)
	            {
	                if(a[j] == 'H')
	                {
	                    a[j] = 'T';
	                }
	                else
	                {
	                    a[j] = 'H';
	                }
	            }
	        }
	    }
	    int ans = 0;
	    for(int i=0;i<n-k;i++)
	    {
	        if(a[i] == 'H')
	        {
	            ans++;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
