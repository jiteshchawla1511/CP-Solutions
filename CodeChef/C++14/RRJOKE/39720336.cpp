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
	    int c = 0;
	    for(int i=1;i<=n;i++)
	    {
	        int a,b;
	        cin >> a >> b;
	        c = c^i;
	        
	    }
	    cout<<c<<endl;
	}
	return 0;
}
