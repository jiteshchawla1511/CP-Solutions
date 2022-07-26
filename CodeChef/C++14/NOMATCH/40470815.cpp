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
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    sort(a,a+n);
	    long long int sum = 0;
	    for(int i=0;i<n/2;i++)
	    {
	        sum += abs(a[n-i-1] - a[i]);
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
