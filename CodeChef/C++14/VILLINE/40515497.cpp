#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int m,c;
	int c1 = 0,c2=0;
	cin >> m >> c;
	while(n--)
	{
	    int x,y,p;
	    
	    cin >> x >> y >> p;
	    if(y>(m*x + c))
	    {
	        c1 += p;
	    }
	    if(y<(m*x + c))
	    {
	        c2 += p;
	    }
	    
	}
	cout<<max(c1,c2)<<endl;
	return 0;
}
