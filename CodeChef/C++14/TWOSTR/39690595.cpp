#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    string s1,s2;
	    cin >> s1 >> s2;
	    int flag;
	    
	    for(int i=0;i<s1.length();i++)
	    {
	        if(s1[i]==s2[i] || s1[i] == '?' || s2[i] == '?')
	        {
	            flag=1;
	        }
	        else
	        {
	            flag=0;
	            break;
	        }
	    }
	   
	    if(flag==1){
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
