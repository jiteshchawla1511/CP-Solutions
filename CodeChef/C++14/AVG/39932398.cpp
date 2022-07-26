#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k,v;
	    cin >> n >> k >> v;

	    int sum = 0;
	    for(int i=0;i<n;i++)
	    {
	        int num;
	        cin >> num;
	        sum += num;
	    }
	   
	   
	    int x = (v*(n+k) - sum)/k;
	    if(x<=0 || (v*(n+k) - sum)%k != 0)
	    {
	        cout<<-1<<endl;
	    }
	    else
	    {
	        cout<<x<<endl;
	    }
	    
	}
	return 0;
}
