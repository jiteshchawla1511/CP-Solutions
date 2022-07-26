#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b;
	    cin >> a >> b;
	   
	   int n1 = int(sqrt(a));
	   
	   int n2 = (-1 + sqrt( 1 + 4*(b) ))/2;
	   
	   if(n1>n2)
	   {
	       cout<<"Limak"<<endl;
	   }
	   else
	   {
	       cout<<"Bob"<<endl;
	   }
	}
	return 0;
}
