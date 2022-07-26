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
	    int A[n];
	    for (int i = 0; i < n; i++) {
	        cin >> A[i];
	    }
	    
	    int ans[n] = {0};
	    ans[n-1] = 1;
	    
	    for (int i = n-2; i >= 0; i--) {
	        if((A[i]>0 && A[i+1]<0) || (A[i]<0 && A[i+1]>0))
	        {
	            ans[i] = ans[i+1]+1;
	        }
	        else
	        {
	            ans[i] = 1;
	            
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<ans[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
