#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int A[26];
	    for(int i=0;i<26;i++) cin >> A[i];
	    
	    int has[26] = {0};
	    string s;
	    cin >> s;
	    int sum = 0;
	    for(int i=0;i<s.length();i++)
	    {
	        has[s[i] - 'a']++;
	    }
	    for(int i=0;i<26;i++)
	    {
	        if(has[i] == 0)
	        {
	            sum = sum + A[i];
	        }
	    }
	    
	    cout<<sum<<endl;
	    
	}
	return 0;
}
