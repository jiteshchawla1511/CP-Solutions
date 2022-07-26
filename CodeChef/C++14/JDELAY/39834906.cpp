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
	    int count =0;
	    while(n--)
	    {
	        int a,b;
	        cin >> a >> b;
	        if((b-a)>5)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
