#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	string s,w;
    cin >> s;
	cin >> t;
	while(t--)
	{
	    
	    int k = s.size();
	    
	    int p = 0;
	    
	    cin >> w;
	    int m = w.size();
	    for(int i=0;i<k;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(s[i] == w[j])
	            {
	                    p += 1;
	            }
	        }
	    }
	    if(p==m)
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
