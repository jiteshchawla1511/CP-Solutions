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
	    int L[n],G[n];
	    for(int i=0;i<n;i++) cin >> L[i];
	    for(int i=0;i<n;i++) cin >> G[i];
	    
	    int front = 0,back = 0;
	    for(int i=0;i<n;i++)
	    {
	        if(L[i] <= G[i])
	        {
	            front++;
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(L[i] <= G[n-i-1])
	        {
	            back++;
	        }
	    }
	    if(front == n && back == n)
	    {
	        cout<<"both"<<endl;
	    }
	    else if(front == n)
	    {
	        cout<<"front"<<endl;
	    }
	    else if(back == n)
	    {
	        cout<<"back"<<endl;
	    }
	    else 
	    {
	        cout<<"none"<<endl;
	    }
	}
	return 0;
}
