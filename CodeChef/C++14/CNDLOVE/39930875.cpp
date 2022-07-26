#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int packs;
	    int sum = 0;
	    cin >> packs;
	    for(int i=0;i<packs;i++)
	    {
	        int num;
	        cin >> num;
	        sum += num;
	    }
	    if(sum%2 == 0)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
