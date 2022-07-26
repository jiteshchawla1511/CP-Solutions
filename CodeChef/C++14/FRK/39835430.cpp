#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	int count = 0;
	while(t--)
	{
	    string s;
	    cin >> s;
	    
	    for (int i = 0; i < s.length(); i++) {
	        if(s[i]=='c' && s[i+1]=='h')
	        {
	            count++;
	            break;
	        }
	        else if(s[i] == 'h' && s[i+1] == 'e')
	        {
	            count++;
	            break;
	        }
	        else if(s[i]=='e' && s[i+1] == 'f')
	        {
	            count++;
	            break;
	        }
	    }
	    
	}
	cout<<count<<endl;
	return 0;
}
