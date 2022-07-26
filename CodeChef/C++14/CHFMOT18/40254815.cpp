#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long S,N;
	    cin>>S>>N;
	    if(S==N)
	    {cout<<1<<endl;continue;}
	    if(N>S)
	    {
	        if(S==1 || S%2==0)
	        {cout<<1<<endl;continue;}
	        else
	        {cout<<2<<endl;continue;}
	    }
	    else
	    {
	        if(S%N==0)
	        {cout<<S/N<<endl;continue;}
	        else
	        {
	            long long c=S/N;
	            long long j=S%N;
	            if(j==1 || j%2==0)
	            {cout<<c+1<<endl;continue;}
	            else
	            {cout<<c+2<<endl;continue;}
	        }
	    }
	}
	return 0;
}
