#include <iostream>
#include <cmath>


using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    long long int N,B,M;
	    cin >> N >> B >> M;
	    long long int count = 0;
	    while(N>=1)
	    {
	        if(N==1)
	        {
	            count = count + M;
	            break;
	        }
	        else if(N%2==0)
	        {
	            count = count + (N/2)*M + B;
	            N = N - N/2;
	           
	        }
	        else if(N%2==1)
    	    {
	           count = count + (N+1)*M/2 + B;
	           N = N - (N+1)/2;
	            
	        }
	        M = M*2;
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
