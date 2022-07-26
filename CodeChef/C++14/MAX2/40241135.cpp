#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	string s;
	cin >> s;
	int ans = 0;
	for(int i=n-1;i>=0;i--)
	{
	    if(s[i] == '0')
	    {
	        ans++;
	    }
	    if(s[i] == '1')
	    {
	        break;
	    }
	    
	}
	cout<<ans<<endl;
	return 0;
}
