#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long int t;
	cin >> t;
	while(t--)
	{
	    long int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    sort(arr,arr + n);
	    cout<<(n-1)*arr[0]<<endl;
	    
	    
	}
	return 0;
}
