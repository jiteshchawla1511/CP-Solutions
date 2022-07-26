#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a1,a2,a3,a4,a5,p;
	    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> p;
	    int x = (a1+a2+a3+a4+a5);
	    if(x*p <= 120)
	    {
	        cout<<"No"<<endl;
	    }
	    else
	    {
	        cout<<"Yes"<<endl;
	    }
	}
	return 0;
}
