#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a[30];
	    int flag = 0;
	    for(int i=0;i<30;i++)
	    {
	        cin >> a[i];
	    }
	    
	    for(int i=0;i<25;i++)
        {
            if(a[i]==1 && a[i+1]==1 && a[i+2]==1 && a[i+3]==1 && a[i+4]==1 && a[i+5]==1)
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"#coderlifematters"<<endl;
        else
            cout<<"#allcodersarefun"<<endl;
	    
	}
	return 0;
}
