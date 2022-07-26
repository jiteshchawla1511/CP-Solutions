#include <iostream>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    ll a[n];
	    
	    for(int i = 0; i < n; i++) cin >> a[i];
	    
	    int ans = 0;
	   
	     for(int i = 0; i < n; i++){
	         
	          ll sum = 0, mul = 1;
	         
	         for(int j = i; j < n; j++){
	             
	            sum += a[j];
	            mul *= a[j];
	            if(sum == mul) ans++;
	             
	         }
	     }
	     
	     cout << ans << endl;
	    
	}
	return 0;
}
