#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    char arr[n];
	    int x=0;
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    
	    for(int j=0;j<n;j++)
	    {
	        if(arr[j] == 'Y')
	            x=1;
	        if(arr[j] == 'I')
	            x=2;
	        
	    }
	    if(x==0)
	        cout<<"NOT SURE"<<endl;
	    else if(x==1)
	        cout<<"NOT INDIAN"<<endl;
	    else if(x==2)
	        cout<<"INDIAN"<<endl;
	    
	}
	
	return 0;
}
