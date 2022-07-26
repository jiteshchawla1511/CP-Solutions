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
	    int A[n],B[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> A[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        x = A[i];
	        int count = 0;
	        for(int j=i+1;j<n;j++)
	        {
	            if(x<A[j])
	            {
	                count++;
	            }
	        }
	        B[i] = count;
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<B[i]<<" ";
	    }
	}
	cout<<endl;
	return 0;
}
