#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int d1,v1,d2,v2,p;
	cin >> d1 >> v1 >> d2 >> v2 >> p;
	int i = 1;
	int ans = 0;
	while(true)
	{
	    if(i>=d1)
	    {
	        ans += v1;
	    }
	    if(i>=d2)
	    {
	        ans += v2;
	    }
	    if(ans >= p)
	    {
	        break;
	    }
	    i++;
	}
	cout<<i<<endl;
	
	
	
	


	return 0;
}
