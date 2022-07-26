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
	    int sum = 0;
	    sort(a,a+n,greater<int>());
	    for(int i=0;i<n;i++)
	    {
	        if((a[i] - i) < 0)
	        {
	            sum += 0;
	        }
	        else
	        {
	            sum += a[i] - i;
	            sum %= 1000000007;
	        }
	    }
	    
	    cout<<sum%1000000007<<endl;
	}
	return 0;
}
