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
	    int sum = a + b;
	    int count = 0;
	    while(sum > 0)
	    {
	        int n = sum%10;
	        if(n==0 || n==6 || n==9)
	            count = count + 6;
	        if(n==1)
	            count = count + 2;
	        if(n==2 || n==3 || n==5)
	            count = count + 5;
	        if(n==4)
	            count = count + 4;
	        if(n==7)
	            count = count + 3;
	        if(n==8)
	            count = count + 7;
	        
	        sum /= 10;
	       
	    }
	    cout<<count<<endl;
	}
	return 0;
}
