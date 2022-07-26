#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int length,breadht;
	cin >> length >> breadht;
	int area = length*breadht;
	int peri = 2*(length+breadht);
	if(area>peri)
	{
	    cout<<"Area"<<endl;
	    cout<<area<<endl;
	}
	else if(peri>area)
	{
	    cout<<"Peri"<<endl;
	    cout<<peri<<endl;
	}
	else
	{
	    cout<<"Eq"<<endl;
	    cout<<area<<endl;
	}
	return 0;
}
