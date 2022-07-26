#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    long long int sum = 0;
	    long long int curr = 0;
	    int n,q;
	    cin >>n>> q;
	    while(q--)
	    {
	        int a,b;
	        cin >> a>>b;
	        sum += abs(curr - a);
	        sum += abs(a-b);
	        curr = b;
	        
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
