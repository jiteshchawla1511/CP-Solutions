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
	    int count = 0;
	    int len = s.length();
	    for(int i=0;i<len;i++)
	    {
	        if(s[i] != s[i+1])
	        {
	            count++;
	        }
	    }
	    cout<<count/2<<endl;
	}
	return 0;
}
