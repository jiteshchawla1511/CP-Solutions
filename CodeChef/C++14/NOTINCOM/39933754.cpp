#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b;
	    cin >> a >>b;
	    int A[a];
	    int B[b];
	    set <int> s;
	    for(int i=0;i<a;i++)
	    {
	        cin >> A[i];
	        s.insert(A[i]);
	    }
	    for(int i=0;i<b;i++)
	    {
	        cin >> B[i];
	        s.insert(B[i]);
	    }
	    cout<<(a+b) - s.size()<<endl;

	

	    
	    
	    
	}
	return 0;
}
