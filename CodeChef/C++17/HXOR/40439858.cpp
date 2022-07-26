#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin >> t;
	
	while(t--)
	{
	    
	    long long int n,x,y,r,p;
	    long long int i=0;
	        cin >> n >> x;
	        long long int a[100000];
	        for(long long int m=0;m<n;m++)
	        {
	            cin >> a[m];
	        }
	        for(long long int k =x;k>0 && i<n-1;k--)
	        {
	            int flag = 0;
                p = log(a[i])/log(2);
	            r = pow(2,p);
	            a[i] = a[i]^r;
	            for(long long int j=i+1;j<n;j++)
	            {
	                if((a[j]^r) < a[j])
	                {
	                    a[j] = a[j]^r;
	                    flag = 1;
	                    break;
	                }
	            }
	            if(flag == 0)
	            {
	                a[n-1] = a[n-1]^r;
	            }
	            while(a[i] <=0)
	            i++;
	        
	            y = k+1;
	        
	        }
	        if(y>0)
	        {
	            if(n<3 and y%2 > 0)
	            {
	                a[n-1] = a[n-1]^1;
	                a[n-2] = a[n-2]^1;
	            }
	        }
	        for(long long int u=0;u<n;u++)
	        {
	            cout<<a[u]<<" ";
	        }
	       
	    
	}
	cout<<endl;
	return 0;
}
