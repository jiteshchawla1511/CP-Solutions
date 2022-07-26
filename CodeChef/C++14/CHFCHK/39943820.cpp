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
	    int A[n];
	    for(int i=0;i<n;i++) cin >> A[i];
	    sort(A,A+n);
	    int Max = A[0];
	    
	    cout<<Max<<endl;
	}
	return 0;
}
