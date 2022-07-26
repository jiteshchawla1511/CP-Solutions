#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k;
	    cin >> n >> k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    int t=1;
	    int sum = 0;
	    for(int i=0;i<n;i++)
	    {
	        sum = sum + a[i];
	        if(sum > k)
	        {
	            t++;
	            sum = a[i];
	        }
	        if(k < a[i])
	        {
	            t = -1;
	            break;
	        }
	    }
	    cout<<t<<endl;
	    
	}
	return 0;
}
