#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int b;
	    cin >> b;
	    b = b -2;
	    b/=2;
	    int n = b*(b+1)/2;
	    cout<<n<<endl;
	}
	return 0;
}
