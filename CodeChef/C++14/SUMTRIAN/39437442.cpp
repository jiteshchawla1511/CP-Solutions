#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int A[n][n];
	    for(int row =0;row<n;row++)
	    {
	        for(int col =0;col<row+1;col++)
	        {
	            cin >> A[row][col];
	        }
	    }
	    
	    for(int row =n-2;row>=0;row--)
	    {
	        for(int col =0;col<row+1;col++)
	        {
	            A[row][col] += max(A[row+1][col],A[row+1][col+1]);
	        }
	    }
	    cout<<A[0][0]<<endl;
	}
	    
	    
	return 0;
}
