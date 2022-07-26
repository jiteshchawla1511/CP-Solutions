#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a1,a2,a3,c1,c2,c3;
	    cin >> a1 >> a2 >> a3 >> c1 >> c2 >> c3;
	    vector<pair<int,int>> v;
	    v.push_back({a1,c1});
	    v.push_back({a2,c2});
	    v.push_back({a3,c3});
	    sort(v.begin(),v.end());
	    bool flag = true;
	    for(int i=1;i<3;i++)
	    {
	        if(v[i].first > v[i-1].first)
	        {
	            if(v[i].second <= v[i-1].second)
	            {
	                flag = false;
	                break;
	            }
	        }
	        
	        else if(v[i].first == v[i-1].first)
	        {
	            if(v[i].second != v[i-1].second)
	            {
	                flag = false;
	                break;
	            }
	        }
	    }
	    if(flag)
	    {
	        cout<<"FAIR"<<endl;
	    }
	    else
	    {
	        cout<<"NOT FAIR"<<endl;
	    }
	    
	}
	return 0;
}
