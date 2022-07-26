#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    cin >> s;
	    int flag = 0;
	    for (int i = 0; i < s.length(); i=i+2) {
	        /* code */
	        if(s[i] == s[i+1])
	        {
	            flag = 1;
	            break;
	        }
	    }
	    if(flag == 1)
	    {
	        cout<<"no"<<endl;
	    }
	    else
	    {
	        cout<<"yes"<<endl;
	    }
	}
	return 0;
}
