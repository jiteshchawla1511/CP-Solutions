#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	// your code goes here
	int t;
	cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        for(int i=0;i<=n/2;i++)
        {
            ans = ans + pow(n - 2*i,2);
        }
        cout<<ans<<endl;
    }
	return 0;
}
