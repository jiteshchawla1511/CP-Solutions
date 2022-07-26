#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin >> t;
	while(t--)
	{
	    float x1,x2,x3,v1,v2;
	    cin >> x1 >> x2 >> x3 >> v1 >> v2;
	    float t1 = (x3 - x1)/v1;
	    float t2 = (x2 - x3)/v2;
	    if(t1 > t2)
	    {
	        cout<<"Kefa"<<endl;
	    }
	    else if(t1 <t2)
	    {
	        cout<<"Chef"<<endl;
	    }
	    else{
	        cout<<"Draw"<<endl;
	    }
	    
	}
	return 0;
}
