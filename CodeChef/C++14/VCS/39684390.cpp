#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,m,k;
	    cin >> n >> m >> k;
	    vector<int> A(m);
	    set<int> s;
	    
	    for(int i=0;i<m;i++)
	    {
	        cin >> A[i];
	        s.insert(A[i]);
	    }
	    vector <int> B(k);
	    for(int i=0;i<k;i++)
	    {
	        cin >> B[i];
	        s.insert(B[i]);
	    }
	    cout<<m+k - s.size()<<" "<<n - s.size()<<endl;
	    
	}
	return 0;
}
