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
	    int a[n],b[n] = {0},flag = 1;
	    int sum = 0;
	    for(int i=0;i<n;i++)
	    {
	        cin >> a[i];
	        if((a[i] - 1) < n)
	        {
	            b[a[i] - 1] = 1;
	        }
	        
	    }
	    for(int i=0;i<n;i++)
	    {
	        sum += b[i];
	    }
	    for(int i=0;i<n-1;i++)
	    {
	        if(a[i] > a[i+1])
	        {
	            flag = 0;
	        }
	    }
	    
	    if(sum == n && flag == 0)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
