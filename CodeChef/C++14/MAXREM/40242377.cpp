#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
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
	v.erase(unique(v.begin(),v.end()),v.end());
	cout<<v[v.size() - 2]<<endl;
	
	
	
	return 0;
}
