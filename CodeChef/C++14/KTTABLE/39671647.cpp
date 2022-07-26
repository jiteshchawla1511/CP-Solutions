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
	    int arr1[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr1[i];
	    }
	    
	    int arr2[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr2[i];
	    }
	    
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(i==0)
	        {
	            if(arr1[i] >= arr2[i])
	            {
	                count++;
	            }
	        }
	        else
	        {
	            if(arr1[i] - arr1[i-1] >= arr2[i])
	            {
	                count++;
	            }
	        }
	    }
	    cout<<count<<endl;
	   
	    
	}
	return 0;
}
