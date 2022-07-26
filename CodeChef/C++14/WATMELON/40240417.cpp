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
	    int a[n];
	    int sum = 0;
	    for(int i=0;i<n;i++)
	    {
	        cin >> a[i];
	        sum += a[i];
	    }
	    if(sum >= 0)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
