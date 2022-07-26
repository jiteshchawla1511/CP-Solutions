#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	while(n)
	{
	    //Test Case Loop
	    int A[n];
	    for(int i=0;i<n;i++) cin >> A[i];
	    bool ambg = true;
	    
	    int inverse[n];
	    for(int i=0;i<n;i++)
	    {
	        inverse[A[i] - 1] = i + 1;
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(A[i] != inverse[i])
	        {
	            ambg = false;
	            break;
	        }
	    }
	    if(ambg)
	    {
	        cout<<"ambiguous"<<endl;
	    }
	    else
	    {
	        cout<<"not ambiguous"<<endl;
	    }
	    
	    
	    cin >> n;
	}
	return 0;
}
