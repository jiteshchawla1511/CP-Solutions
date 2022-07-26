#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include<string>

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    char S[n];
	    cin >> S;
	    int red=0,green=0,blue=0;
	    
	    for(int i=0;i<strlen(S);i++)
	    {
	        if(S[i] == 'R')
	        red++;
	        
	            
	        if(S[i] == 'G')
	        green++;
	        
	            
	        if(S[i] == 'B')
	        blue++;
	        
	    }
	            
	        
	        if(red>=green && red>=blue)
	        {
	            cout<<green+blue<<endl;
	        }
	        else if(green>=red && green>=blue)
	        {
	            cout<<red+blue<<endl;
	        }
	        else
	        {
	            cout<<green+red<<endl;
	        }
	            
	       
	        
	    
	}
	return 0;
}
