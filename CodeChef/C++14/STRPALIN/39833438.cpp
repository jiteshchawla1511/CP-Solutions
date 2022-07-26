#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    string a,b;
	    cin >> a >> b;
	    bool flag = false;
	    for(int i=0;i<a.length();i++)
	    {
	        for(int j=0;j<b.length();j++)
	        {
	            if(a[i] == b[j])
	            {
	                flag = true;
	                break;
	            }
	        }
	        if(flag)
	        {
	            break;
	        }
	        
	    }
	    
	    if(flag)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	    
	}
	return 0;
}
