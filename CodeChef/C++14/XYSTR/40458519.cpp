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
	    int pair = 0;
	    for(int i=0;i<s.length()-1;i++)
	    {
	        if(s[i] == 'x' && s[i+1] == 'y' ||s[i] == 'y' && s[i+1] == 'x' )
	        {
	            pair++;
	            ++i;
	        }
	    }
	    cout<<pair<<endl;
	    
	}
	return 0;
}
