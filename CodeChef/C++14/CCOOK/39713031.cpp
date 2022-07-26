#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int t;
	cin >> t;
	while(t--)
	{
	    int arr[5];
	    for(int i=0;i<5;i++) cin >> arr[i];
	    int sum=0;
	    for(int i=0;i<5;i++) sum += arr[i];
	    if(sum == 0) cout<<"Beginner"<<endl;
	    if(sum == 1) cout<<"Junior Developer"<<endl;
	    if(sum == 2) cout<<"Middle Developer"<<endl;
	    if(sum == 3) cout<<"Senior Developer"<<endl;
	    if(sum == 4) cout<<"Hacker"<<endl;
	    if(sum == 5) cout<<"Jeff Dean"<<endl;
	    
	}
	return 0;
}
