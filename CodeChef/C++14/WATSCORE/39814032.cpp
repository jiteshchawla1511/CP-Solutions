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
	    cin >> n;
	    int S[n];
	    int A[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> S[i] >> A[i];
	    }
	    int B[9] = {0};
	    long long int sum = 0;
	    for(int i=0;i<n;i++)
	    {
	        if(S[i] < 9)
	        {
	            B[S[i] - 1] = max(B[S[i] - 1],A[i]);
	        }
	    }
	    for(int i=0;i<9;i++)
	    {
	        sum += B[i];
	    }
	    cout<<sum<<endl;
	    
	    
	    
	}
	return 0;
}
