#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int x,y,n,k;
	    cin >> x >> y >> k >> n;
	    if((x-y)>0)
	    {
	        for(int i=0;i<n;i++)
	        {
	            x = x - k;
	            y = y + k;
	            if(((x)==(y)) && (x)>=0 && (y)<=n)
	            {
	                cout<<"Yes"<<endl;
	                break;
	            }
	            
	            if(y>x)
	            {
	                cout<<"No"<<endl;
	                break;
	            }
	            else
	            {
	                continue;
	            }
	        }
	    }
	    else if((y-x)>0)
	    {
	        for(int i=0;i<n;i++)
	        {
	            y = y - k;
	            x = x + k;
	            if(((y)==(x)) && (y)>=0 && (x)<=n)
	            {
	                cout<<"Yes"<<endl;
	                break;
	            }
	            if(x>y)
	            {
	                cout<<"No"<<endl;
	                break;
	            }
	            else
	            {
	                continue;
	            }
	        }
	    }
	    else if(x==y)
	    {
	        cout<<"Yes"<<endl;
	    }
	}
	return 0;
}