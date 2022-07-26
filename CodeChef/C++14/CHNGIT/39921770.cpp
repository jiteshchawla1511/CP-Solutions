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
	    map<int,int>m;
	    for(int i=0;i<n;i++)
	    {
	        int a;
	        cin >> a;
	        m[a]++;
	    }
	    int max_recur = 0;
	    for(auto it = m.begin();it != m.end();it++)
	    {
	        max_recur = max(max_recur,it->second);
	    }
	    cout<<n - max_recur<<endl;
	}
	return 0;
}
