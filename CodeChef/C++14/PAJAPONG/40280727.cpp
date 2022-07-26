#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    long long int x,y,k;
	    cin >> x >> y >> k;
	    long long int a = (x+y)/k;
	    if(a%2 == 0)
	    {
	        cout<<"Chef"<<endl;
	    }
	    else
	    {
	        cout<<"Paja"<<endl;
	    }
	    
	  
	    
	}
	return 0;
}
