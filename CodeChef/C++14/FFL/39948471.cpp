#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,s;
	    cin >> n >> s;
	    int a = 100,b=100;
	    int A[n],B[n];
	    for(int i=0;i<n;i++) cin >> A[i];
	    for(int i=0;i<n;i++) cin >> B[i];
	    
	    for(int i=0;i<n;i++)
	    {
	        if(B[i] == 1)
	        {
	            a = min(A[i],a); 
	        }
	        else if(B[i] == 0)
	        {
	            b = min(A[i],b);
	        }
	    }
	    int res = 100 - s;
	    if(a+b <= res)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	    
	}
	return 0;
}
