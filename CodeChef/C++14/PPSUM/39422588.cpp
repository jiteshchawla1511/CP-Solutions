#include <iostream>
using namespace std;

int sumNum(int d,int n)
{
    if(d == 0)
        return n;
    return sumNum(d-1,n*(n+1)/2);
}


int main() {
	int t;
	cin >> t;
	int d,n;
	while(t--)
	{
	    cin >> d>> n;
	    cout<<sumNum(d,n)<<endl;
	    
	}
	

	



	

	return 0;
}
