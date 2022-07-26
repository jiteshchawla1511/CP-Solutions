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
	    int B[n];
	    for(int i=0;i<n;i++) cin >> A[i];
	    for(int i=0;i<n;i++) cin >> B[i];
	    int ans = 0;
	    for(int i=0;i<n;i++)
	    {
	        int x = A[i]*20 - B[i]*10;
	        if(x>ans)
	        {
	            ans = x;
	        }
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}
