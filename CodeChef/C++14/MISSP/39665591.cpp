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
	    int arr[10001] = {0};
	    
	    for(int i=0;i<n;i++)
	    {
	        int s;
	        cin >> s;
	        arr[s]++;
	    }
	    for(int i=0;i<10001;i++)
	    {
	        if(arr[i]%2 != 0)
	        {
	            cout<<i<<endl;
	            break;
	        }
	    }
	    
	  
	    
	}
	
	return 0;
}
