#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int r;
	    cin >> r;
	    int x1,y1,x2,y2,x3,y3;
	    cin >> x1 >> y1;
	    cin >> x2 >> y2;
	    cin >> x3 >> y3;
	    
	    int count = 0;
	    
	    float d1 = sqrt( pow (x2 - x1 ,2) + pow (y2 - y1 ,2));
	    float d2 = sqrt( pow (x3 - x2 ,2) + pow (y3 - y2 ,2));
	    float d3 = sqrt( pow (x3 - x1 ,2) + pow (y3 - y1 ,2));
	    
	    if(d1<=r)
	        count++;
	    if(d2<=r)
	        count++;
	    if(d3<=r)
	        count++;
	        
	    if(count>1)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	        
	    
	        
	        
	    
	    
	    
	}
	return 0;
}
