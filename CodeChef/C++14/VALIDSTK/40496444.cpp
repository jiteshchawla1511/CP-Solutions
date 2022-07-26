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
	    cin >>n;
	    int a[n];
	    int c = 0;
	    int d = 0;
	    for(int i=0;i<n;i++)
	    {
	        cin >> a[i];
	        if(a[i] == 1)
	        {
	            c++;
	        }
	        if(a[i] == 0)
	        {
	            c--;
	        }
	        if(c<0)
	        {
	            d=1;
	        }
	        
	    }
	    if(d == 0)
	    {
	        cout<<"Valid"<<endl;
	    }
	    else
	    {
            cout<<"Invalid"<<endl;
	    }
	}
	return 0;
}
