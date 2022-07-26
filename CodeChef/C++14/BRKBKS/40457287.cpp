#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int s,w1,w2,w3;
	    cin >> s >> w1 >> w2 >> w3;
	    if(s>=(w1+w2+w3))
	    {
	        cout<<1<<endl;
	    }
	    else if(s>=(w1+w2) || s>=(w2+w3))
	    {
	        cout<<2<<endl;
	    }
	    else
	    {
	        cout<<3<<endl;
	    }
	}
	return 0;
}
