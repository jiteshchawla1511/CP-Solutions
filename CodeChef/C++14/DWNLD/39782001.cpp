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
	    int arr[10][2];
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i][0] >> arr[i][1];
	    }
	    int bill = 0,c = 0;
	    for(int i=0;i<n;i++)
	    {
	        c = c + arr[i][0];
	        if(c >= k && k != 0)
	        {
	            bill = bill + (c-k)*arr[i][1]; 
	            k=0;
	            continue;
	        }
	        if(k==0)
	        {
	            bill = bill + arr[i][0]*arr[i][1];
	        }
	    }
	    cout<<bill<<endl;
	}
	return 0;
}
