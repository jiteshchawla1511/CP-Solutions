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
	    string s;
	    cin >> s;
	    int len = s.length();
	    if(len%2 == 0)
	    {
	        for (int i = 0; i < len; i = i+2) {
	            int temp = s[i+1];
	            s[i+1] = s[i];
	            s[i] = temp;
	        }
	    }
	    else
	    {
	        for (int i = 0; i < len-1; i = i+2) {
	            int temp = s[i+1];
	            s[i+1] = s[i];
	            s[i] = temp;
	        }
	    }
	    
	    for(int i=0;i<len;i++)
	    {
	        s[i] = 'z' - (s[i] - 'a');
	    }
	    
	    cout<<s<<endl;
	}
	return 0;
}
