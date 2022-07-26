#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    cin >> s;
	    
	    int amber = count(s.begin(),s.end(),'a');
	    int brass = count(s.begin(),s.end(),'b');
	    
	    if(amber==0 || brass == 0)
	    {
	        cout<<0<<endl;
	    }
	    else if(amber==brass)
	    {
	        cout<<amber<<endl;
	    }
	    else if(amber>brass)
	    {
	        cout<<brass<<endl;
	    }
	    else
	    {
	        cout<<amber<<endl;
	    }
	    
	   
	}
	return 0;
}
