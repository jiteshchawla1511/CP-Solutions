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
        int ret = INT_MAX;
        for (int i=0; i<n; i++) {
            int a;
            cin >> a;
            ret = min(ret, a);
        }
        cout << ret << "\n";
	    
	}
	return 0;
}
