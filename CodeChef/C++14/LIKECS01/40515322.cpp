#include <iostream>
#include <bits/stdc++.h>
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
	    for(int i=0;i<s.length();i++)
	    {
	        for(int j=i-1;j>=0;j--)
	        {
	            if(s[i] == s[j])
	            {
	                flag = 1;
	            }
	        }
	    }
	    if(flag == 1)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
	
	return 0;
}
