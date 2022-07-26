#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,x,s;
	    cin >> n >> x >> s;
	    int a,b;
	    for(int i=0;i<s;i++)
	    {
	        cin >>a >> b;
	        if(x==a)
	        {
	            x=b;
	        }
	        else if(b==x)
	        {
	            x=a;
	        }
	    }
	    cout<<x<<endl;
	}
	return 0;
}
