#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    string s1,s2;
	    cin >> s1 >> s2;
	    int b[3] = {0,0,0};
	    int o[3] = {0,0,0};
	    int d = 0;
	    for(int i=0;i<3;i++)
	    {
	        if(s1[i] == 'b' || s2[i] == 'b')
	        {
	            b[i]++;
	        }
	        if(s1[i] == 'o' || s2[i] == 'o')
	        {
	            o[i]++;
	        }
	        if(o[i]==0 && b[i] == 0)
	        {
	            d = 1;
	        }
	        
	        
	    }
	    if((b[0]+b[1]+b[2] >= 2) && (o[0]+o[1]+o[2] >= 1) && d==0)
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
