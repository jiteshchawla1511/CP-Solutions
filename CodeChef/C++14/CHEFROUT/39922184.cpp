#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    int i,flag=0;
	    for(i=0;i<s.size()-1;i++)
	    {
	        if((s[i]=='S' && s[i+1]=='C') ||(s[i]=='E' && s[i+1]=='C') || (s[i]=='S' && s[i+1]=='E'))
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1)
	    cout<<"no"<<endl;
	    else
	    cout<<"yes"<<endl;
	}
	return 0;
}
