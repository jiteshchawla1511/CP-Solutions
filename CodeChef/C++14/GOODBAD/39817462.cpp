#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k;
	    cin >> n >> k;
	    int lower = 0;
	    int upper = 0;
	    string s;
	    cin >> s;
	    for (int i = 0; i < s.length(); i++) {
	        if(int(s[i]) >=65 && int(s[i])<=90)
	        {
	            upper++;
	        }
	        else
	        {
	            lower++;
	        }
	    }
	    if(lower <= k && upper > k) {
			cout << "brother" << endl;
		} else if(lower > k && upper <= k) {
			cout << "chef" << endl;
		} else if(lower <= k && upper <= k) {
			cout << "both" << endl;
		} else {
			cout << "none" << endl;
		}
	}
	return 0;
}
