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
	    int l[n];
	    int r[n];
	    for(int i=0;i<n;i++) cin >> l[i];
	    int ans=0;
	    int max;
	    int count;
	    
	    for(int i=0;i<n;i++) 
	    {
	        cin >> r[i];
	        
	        if(l[i]*r[i] > ans)
	        {
	            ans = l[i]*r[i];
	            max = r[i];
	            count = i;
	        }
	            
	       
	        else if(l[i]*r[i] == ans)
	        {
	            if(r[i]>max)
	            {
	                ans = l[i]*r[i];
	                max = r[i];
	                count = i;
	            }
	        }
	            
	            
	    }
	    cout<<count + 1<<endl;
	    
	    
	}
	return 0;
}
