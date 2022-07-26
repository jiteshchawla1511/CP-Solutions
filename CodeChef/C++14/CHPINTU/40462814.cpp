#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,m;
	    cin >> n >> m;
	    set <long long int>s;
	    vector <long long int> v;
	    int f[n],p[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> f[i];
	        s.insert(f[i]);
	    }
	    for(int i=0;i<n;i++) cin >> p[i];
	    long long int sum =0;
	    for(auto it=s.begin();it != s.end();it++)
	    {
	        for(int i=0;i<n;i++)
	        {
	            if(*it == f[i])
	            {
	                sum += p[i];
	            }
	        }
	        v.push_back(sum);
	        sum = 0;
	    }
	    long long int min=v[0];
        for(int i=1;i<v.size();i++)
        {
            if(min>v[i])
            {
                min=v[i];
            }
        }
        cout<<min<<endl;
	}
  
	return 0;
}
