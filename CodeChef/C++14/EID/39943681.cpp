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
	    vector <int> ans;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin >> x;
	        v.push_back(x);
	    }
	    sort(v.begin(),v.end());
	    for(int i=0;i<(n-1);i++)
	    {
	        int y = (v[i+1] - v[i]);
	        ans.push_back(y);
	    }
	    sort(ans.begin(),ans.end());
	    cout<<ans[0]<<endl;
	    
	    
	}
	return 0;
}
