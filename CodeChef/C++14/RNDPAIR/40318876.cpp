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
	    float total = (n*(n-1))/2;
	    float max = a[n-1] + a[n-2];
	    int count = 0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(i<j)
	            {
	                if(a[i] + a[j] == max)
	                {
	                    count++;   
	                }
	            }
	        }
	    }
	    cout<<fixed<<setprecision(8)<<(count/total)<<endl;
	}
	return 0;
}
