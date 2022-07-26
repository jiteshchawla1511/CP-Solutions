#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string s[n];
	    int flag =1;
	    for(int i=0;i<n;i++)
	    {
	        cin >> s[i];
	    }
	    if(n==1 && s[0] == "cookie" || s[n-1] == "cookie")
	    {
	        flag = 0;
	        
	    }
	    else
	    {
	        for(int i=0;i<n-1;i++)
	        {
	            if(s[i] == "cookie" && s[i+1] != "milk")
	            {
	                flag = 0;
	                break;
	            }
	        }
	    }
	    if(flag==1)
	    {
	        cout<<"YES"<<endl;
	    }
	    else if(flag == 0)
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
