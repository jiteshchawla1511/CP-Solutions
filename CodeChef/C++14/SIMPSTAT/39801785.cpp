#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	std::cout << std::fixed;
    std::cout << std::setprecision(6);
	int t;
	cin >> t;
	while(t--)
	{
	    long long int n,k;
	    cin >> n >> k;
	    int A[n];
	    for(int i =0;i<n;i++) cin >> A[i];
	    sort(A,A+n);
	    double sum = 0;
	    for (int i = k; i < n-k; i++) {
	        sum += A[i];
	    }
	    double ans = sum/(n-2*k);
	    cout<<ans<<endl;
	}
	return 0;
}
