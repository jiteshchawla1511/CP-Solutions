#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    cin >> s;
	    
	    int zero=0,one=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='0')
	        {
	            zero++;
	        }
	        if(s[i]=='1')
	        {
	            one++;
	        }
	    }
	    if(zero==1 || one==1)
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
