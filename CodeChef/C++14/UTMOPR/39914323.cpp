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
	    int sum = 0;
	    for(int i=0;i<n;i++)
	    {
	        int a;
	        cin >> a;
	        sum = sum + a;
	    }
	    if(sum%2 == 0 && k==1)
	    {
	        cout<<"odd"<<endl;
	    }
	    else
	    {
	        cout<<"even"<<endl;
	    }
	    
	}
	return 0;
}
