#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b;
	    cin >> a >> b;
	    int x,y;
	    int sum;
	    int nw = 0;
	    int i = 1;
	    while(a != 0 || b != 0)
	    {
	        x = a%10;
	        y = b%10;
	        sum = (x+y)%10;
	        nw += sum*i;
	        i *= 10;
	        a /= 10,b /= 10;
	        
	        
	    }
	    cout<<nw<<endl;
	}
	return 0;
}
