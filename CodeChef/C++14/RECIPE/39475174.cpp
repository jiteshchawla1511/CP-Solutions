#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }
    if(a>b)
    {
        return gcd(b,a%b);
    }
    else
    {
        return gcd(a,b%a);
    }
}

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    int ans;
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    ans = gcd(arr[0],arr[1]);
	    for(int j=2;j<n;j++)
	    {
	        ans = gcd(ans,arr[j]);
	    }
	    
	    for(int k =0;k<n;k++)
	    {
	        cout<<arr[k]/ans<<" ";
	    }
	    cout<<endl;
	    
	    
	    
	    
	    
	}
	return 0;
}
