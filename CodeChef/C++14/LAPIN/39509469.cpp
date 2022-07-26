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
	    int hash[26] ={0};
	    int n = s.size();
	    int mid = n/2;
	    bool lap = true;
	    
	    for(int j=0;j<mid;j++)
	    {
	        int x = s[j] - 'a';
	        hash[x]++;
	    }
	    if(n%2 != 0)
	    {
	        mid = mid + 1;
	    }
	    for(int j=mid;j<n;j++)
	    {
	        int x = s[j] - 'a';
	        hash[x]--;
	    }
	    for(int j=0;j<26;j++)
	    {
	        if(hash[j] != 0 )
	        {
	            lap = false;
	            break;
	        }
	    }
	    
	    if(lap)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	
	return 0;
}
