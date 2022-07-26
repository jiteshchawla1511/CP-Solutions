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
	    vector <int> v;
	    for(int i=0;i<n;i++)
	    {
	        int x; 
	        cin >> x;
	        v.push_back(x);
	    }
	    sort(v.begin(),v.end());
	    cout<<v[n-1]<<endl;
	    
	    
	}
	return 0;
}
