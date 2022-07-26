#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n, rent = 0, missedRent = 0;
	    cin >> n;
	    while (n--) {
	        int a;
	        cin >> a;
            rent += 100*missedRent;

	        if (a == 0) { 
	            rent += 1000;
	            if (!missedRent) {
		            missedRent = 1;
		        	rent += 100;
		        }
	        }
	    }
	    cout << rent << '\n';
	}
	return 0;
}
