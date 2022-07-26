#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n1;
	    cin >> n1;
	    int arr1[n1];
	    for(int i=0;i<n1;i++) cin >> arr1[i];
	    
	    int n2;
	    cin >> n2;
	    int arr2[n2];
	    for(int i=0;i<n2;i++) cin >> arr2[i];
	    int count = 0;
	    
	    for(int i=0;i<n1;i++)
	    {
	        if(arr1[i]==arr2[count])
	        {
	            count = count + 1;
	        }
	    }
	    if(count==n2)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	   
	    
	    
	    
	    
	    
	    
	    
	    
	}
	return 0;
}
