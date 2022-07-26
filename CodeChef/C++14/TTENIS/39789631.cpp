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
	    int one = 0;
	    int zero = 0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i] == '1')
	        {
	            one++;
	        }
	        else
	        {
	            zero++;
	        }
	        if(max(one,zero) >=11 && abs(one-zero)>=2)
	        {
	            break;
	        }
	    }
	    if(one > zero)
	    {
	        cout<<"WIN"<<endl;
	    }
	    else
	    {
	        cout<<"LOSE"<<endl;
	    }
	    
	}
	
	
	return 0;
}
