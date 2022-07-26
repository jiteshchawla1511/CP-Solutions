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
	    int sum = 0;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin >> A[i];
	        sum += A[i];
	    }
	    int newSum = sum;
	    for(int i=0;i<n;i++)
	    {
	        if(A[i] > k)
	        {
	            newSum = newSum - A[i] + k;
	        }
	    }
	    cout<<sum - newSum<<endl;
	}
	return 0;
}
