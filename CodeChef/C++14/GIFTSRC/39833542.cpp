#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    int n;
	    cin >> n;
	    cin >> s;
	    int x = 0,y = 0;
	    for (int i = 0; i < n; i++) {
	        if(i>0 && s[i] == s[i-1])
	            continue;
	        if(i>0 && s[i] == 'L' && s[i-1] == 'R')
	            continue;
	        if(i>0 && s[i] == 'R' && s[i-1] == 'L')
	            continue;
	        if(i>0 && s[i] == 'U' && s[i-1] == 'D')
	            continue;
	        if(i>0 && s[i] == 'D' && s[i-1] == 'U')
	            continue;
	        
	        if(s[i] == 'L')
	        {
	            x--;
	        }
	        if(s[i] == 'R')
	        {
	            x++;
	        }
	        if(s[i] == 'D')
	        {
	            y--;
	        }
	        if(s[i] == 'U')
	        {
	            y++;
	        }
	        
	    }
	    cout<<x<<" "<<y<<endl;
	}
	return 0;
}
