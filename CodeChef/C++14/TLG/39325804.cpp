#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	long int t;
	cin >> t;
	int a=0,b=0;
	int diff = 0;
	int w =0;
	
	while(t--)
	{
	     int c,d;
	     cin >> c >> d;
	     
	     a = a + c;
	     
	     b = b + d;
	     
	     if(a-b>diff)
	     {
	         diff = (a-b);
	         w = 1;
	        
	     }
	     else if(b-a>diff){
	         diff = (b-a);
	         w = 2;
	     }
	     
	     
	     
	    
	     
	     
	     
	     
	     
	}
	cout<<w<<" "<<diff<<endl;
	return 0;
}
