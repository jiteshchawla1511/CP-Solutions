#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    char a[3][3];
	    
	    for(int i=0;i<3;i++)
	    {
	        for(int j=0;j<3;j++)
	            cin>>a[i][j];
	    }
	    
	    bool flag=false;
	    for(int i=0;i<2;i++)
	    {
	        for(int j=0;j<2;j++)
	        {
	            if(a[i][j]=='l')
	            {
	                if(a[i+1][j]=='l' && a[i+1][j+1]=='l')
	                {
	                    flag=true;
	                    break;
	                }
	            }
	        }
	    }
	    
	    if(flag)
	        cout<<"yes"<<endl;
	    else
	        cout<<"no"<<endl;
	}
	return 0;
}
