#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int A[n];
	    for(int i=0;i<n;i++) cin >> A[i];
	    int Max = 0;
	    int product;
	    int sum = 0;
	    for (int i = 0; i < n; i++) {
	        for (int j = i+1; j < n; j++) {
	            product = A[i]*A[j];
	            while(product != 0)
	            {
	                int d = product%10;
	                sum = sum + d;
	                product /= 10;
	            }
	            if(sum > Max)
	            {
	                Max =  sum;
	            }
	                sum = 0;
	        }
	        
	        
	    }
	    cout<<Max<<endl;
	}
	return 0;
}
