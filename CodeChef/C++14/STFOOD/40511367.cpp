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
	    int Max = 0;
	    while(n--)
	    {
	        int s,p,v;
	        cin >> s >> p >> v;
	        s++;
	        Max = max(Max,p/s*v); 
	        
	    }
	    cout<<Max<<endl;
	}
	return 0;
}
