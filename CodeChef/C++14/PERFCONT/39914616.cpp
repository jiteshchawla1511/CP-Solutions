#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,p;
	    cin >> n >> p;
	    int x;
	    int cakewalk = 0;
	    int difficult = 0;
	    for(int i=0;i<n;i++)
	    {
	        cin >> x;
	        if(x >= p/2)
	        {
	            cakewalk++;
	        }
	        else if(x <= p/10)
	        {
	            difficult++;
	        }
	        
	    }
	    if(cakewalk == 1 && difficult == 2)
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
