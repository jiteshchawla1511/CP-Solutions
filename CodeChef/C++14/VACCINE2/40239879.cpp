#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k;
	    cin >> n >> k;
	    int arr[n];
	    int ans = 0;
	    float risk = 0;
	    float norisk = 0;
	    for(int i=0;i<n;i++) cin >> arr[i];
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i] >= 80 || arr[i] <= 9)
	        {
	            risk++;
	        }
	        else
	        {
	            norisk++;
	        }
	    }
	    
	    ans += ceil(risk/k) + ceil(norisk/k);
	    cout<<ans<<endl;
	   
	   
	    
	    
	    
	}
	return 0;
}
