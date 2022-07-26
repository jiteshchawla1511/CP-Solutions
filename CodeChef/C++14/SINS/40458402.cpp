#include <iostream>
#include <bits/stdc++.h>
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
    
    
}
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b;
	    cin >> a >> b;
	    cout<<2*gcd(a,b)<<endl;
	    
	}
	return 0;
}
