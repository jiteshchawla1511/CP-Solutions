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
	    int j =0;
	    for (int i = 0; i < n; i++) {
	        cin >> A[i];
	        if(A[i]%2 == 0)
	        {
	            j++;
	        }
	    }
	    if(j==n && k==0)
	    cout<<"NO"<<endl;
	    else if(k<=j)
	    cout<<"YES"<<endl;
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
