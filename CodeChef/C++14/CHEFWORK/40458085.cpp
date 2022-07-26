#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int a[n],b[n];
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<n;i++) cin >> b[i];
	int max[3] = {100001,100001,100001};
	for(int i=0;i<n;i++)
	{
	    max[b[i] - 1] = min(max[b[i] - 1],a[i]);
	}
	int x = min(max[0] + max[1],max[2]);
	cout<<x<<endl;
	
	return 0;
}
