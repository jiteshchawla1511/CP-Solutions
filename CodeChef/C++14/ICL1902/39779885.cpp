#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int circles,count=0,s;
	    cin >> circles;
	    while(circles >= 1)
	    {
	        s = sqrt(circles);
	        circles -= (s*s);
	        count++;
	    }
	    cout<<count<<endl;
	    
	}
	
	return 0;
}
