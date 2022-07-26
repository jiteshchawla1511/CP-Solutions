#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    int arr[] = {1,2,5,10,50,100};
	    cin >> n;
	    int ans = 0;
	    for(int i=5;i>=0;i--)
	    {
	        ans += n/arr[i];
	        n%= arr[i];
	        
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
