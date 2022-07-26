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
	    for (int i = 0; i < n; i++) {
	        cin >> A[i];
	    }
	    
	    int B[n];
	    for (int i = 0; i < n; i++) {
	        cin >> B[i];
	    }
	    
	    sort(A,A+n);
	    sort(B,B+n);
	    
	    int sumA = 0;
	    int sumB = 0;
	    for (int i = 0; i < (n-1); i++) {
	        sumA = sumA + A[i];
	    }
	    for (int i = 0; i < (n-1); i++) {
	        sumB = sumB + B[i];
	    }
	    
	    if(sumA > sumB)
	    {
	        cout<<"Bob"<<endl;
	    }
	    else if(sumA == sumB)
	    {
	        cout<<"Draw"<<endl;
	    }
	    else
	    {
	        cout<<"Alice"<<endl;
	    }
	    
	    
	}
	return 0;
}
