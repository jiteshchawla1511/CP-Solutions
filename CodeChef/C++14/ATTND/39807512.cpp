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
	    pair<string,string> arr[n];
	    map<string,int> um;
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i].first >> arr[i].second;
	        um[arr[i].first]++;
	    }
	    for (int i = 0; i < n; i++) {
	        if(um[arr[i].first] == 1)
	        {
	            cout<<arr[i].first<<endl;
	        }
	        else
	        {
	            cout<<arr[i].first<<" "<<arr[i].second<<endl;
	        }
	    }
	    
	}
	return 0;
}
