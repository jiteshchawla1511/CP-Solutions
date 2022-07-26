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
	    string s,r;
	    cin >> s;
	    cin >> r;
	    int sZero = 0;
	    int sOne = 0;
	    int rZero = 0;
	    int rOne = 0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i] == '0')
	            sZero++;
	        if(s[i] == '1')
	            sOne++;
	       
	        if(r[i] == '0')
	            rZero++;
	        if(s[i] == '1')
	            rOne++;
	    }
	    
	    if(rZero == sZero && sOne == rOne)
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
