#include <iostream>
#include <bits/stdc++.h>
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
	    int count_one=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	        {
	            count_one++;
	        }
	    }
	    int x = 120 - n + count_one;
	    float y = x*5/6;
	    if(y>=75)
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
