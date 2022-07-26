#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin >> t;
	while(t--)
	{
	    long long int l,r;
	    cin >> l >> r;
	    if(l == r)
	    {
	        cout<<1<<endl;
	    }
	    else
	    {
	        cout<<2*(r - l) + 1<<endl;
	    }
	}
	return 0;
}
