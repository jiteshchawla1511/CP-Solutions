#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n, k, mx = 0;
	    cin >> n >> k;
	    int g[n];
	    
	    for (int i = 0; i < n; i++)
	        cin >> g[i];
	        
	    for (int i = 0; i < n; i++) {
	        int sum = 0;
	        for (int j = i; j < i+k && j < n; j++)
	            sum += g[j];
	        mx = max(mx, sum);
	    }
	    
	    cout << mx << '\n';
	}
	return 0;
}
