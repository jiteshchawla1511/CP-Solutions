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
	    map <int,int> m;
	    for(int i=0;i<n;i++)
	    {
	        int a;
	        cin >> a;
	        m[a]++;
	    }
	    cout<<m[0]*(m[0] - 1)/2 + m[2]*(m[2] - 1)/2<<endl;
	}
	return 0;
}
