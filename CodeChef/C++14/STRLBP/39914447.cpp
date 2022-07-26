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
	    int counter = 0;
	    int n = s.length();
	    for(int i=0;i<n;i++)
	    {
	        if(s[i] == '1' && s[i+1] == '0' || s[i] == '0' && s[i+1] == '1')
	        {
	            counter++;
	        }
	    }
	    if(counter<=2)
	    {
	        cout<<"uniform"<<endl;
	    }
	    else
	    {
	        cout<<"non-uniform"<<endl;
	    }
	}
	return 0;
}
