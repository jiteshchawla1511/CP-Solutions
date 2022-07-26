#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    string s1;
	    string s2;
	    cin >> s1 >> s2;
	    int min=0,max=0;
	    int len = s1.length();
	    for(int i=0;i<len;i++)
	    {
	        if(s1[i] != s2[i])
	        {
	            max++;
	        }
	        else if(s1[i] == '?')
	        {
	            max++;
	        }
	    }
	    
	    for(int i=0;i<len;i++)
	    {
	        if(s1[i]=='?' || s2[i] == '?')
	        {
	            continue;
	        }
	        else if(s1[i] != s2[i])
	        {
	            min++;
	        }
	    }
	    cout<<min<<" "<<max<<endl;
	    
	    
	    
	}
	return 0;
}
