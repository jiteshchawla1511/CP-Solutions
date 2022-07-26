#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    int count=1;
	    for(int i=0;i<n;i++) cin >> arr[i];
	    sort(arr,arr + n);
	    
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i] != arr[i-1])
	            count++;
	        
	            
	    }
	    cout<<count<<endl;
	    
	    
	    
	}
	return 0;
}
