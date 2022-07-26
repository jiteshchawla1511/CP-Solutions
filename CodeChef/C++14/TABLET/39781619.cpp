#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int p,budget;
	    cin >> p >> budget;
	    int max = -1;
	    int count;
	    while(p--)
	    {
	        int l,b,price;
	        cin >> l >> b >> price;
	        if(price<=budget)
	        {
	            if(l*b > max)
	            {
	                max = l*b;
	                
	            }
	        }
	        
	        
	        
	        
	    }
	    if(max == -1)
	    {
	        cout<<"no tablet"<<endl;
	    }
	    else 
	    {
	        cout<<max<<endl;
	    }
	}
	
	return 0;
}
