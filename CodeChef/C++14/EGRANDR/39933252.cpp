#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin >> t;
	while(t--)
	{
	    long long int n;
	    cin >> n;
	    long long int sum = 0;
	    long long int full = 0;
	    long long int fail = 0;
	    int arr[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin >> arr[i];
	        sum = sum + arr[i];
	        if(arr[i] == 5)
	        {
	            full++;
	        }
	        if(arr[i] == 2)
	        {
	            fail++;
	        }
	    }
	    float grade = sum/n;
	    if(fail == 0 && full > 0 && grade >= 4.0)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	    
	}
	return 0;
}
