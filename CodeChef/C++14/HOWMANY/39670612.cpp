#include <iostream>
using namespace std;
int countDigit(long int n)
{
    if(n==0)
        return 0;
    return 1 + countDigit(n/10);
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	int x = countDigit(n);
	if(x==1)
	{
	    cout<<1<<endl;
	}
	else if(x==2)
	{
	    cout<<2<<endl;
	}
	else if(x==3)
	{
	    cout<<3<<endl;
	}
	else
	{
	    cout<<"More than 3 digits"<<endl;
	}
	
	return 0;
}
