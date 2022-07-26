#include <bits/stdc++.h>
using namespace std;
int main() {
	string mod[7] = {"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
	int t;
	cin >> t;
	while(t--) {
		int y;
		cin >> y;
		y += (y-1)/4-(y-1)/100+(y-1)/400;
		y %= 7;
		cout << mod[(y+6)%7] << '\n';
	}
}