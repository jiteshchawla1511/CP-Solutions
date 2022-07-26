#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int realFancy = 0;
	    string word;
	    char c = '0';
	    while (c != '\n') {
	        cin >> word;
	        scanf("%c", &c);
	        if (word == "not")
	            realFancy = 1;
	    }
	    cout << (realFancy ? "Real Fancy\n" : "regularly fancy\n");
	}
	return 0;
}
