#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int cakewalk=0,simple=0,easy=0,easyMedium=0,medium =0,mediumHard=0,hard=0;
	    string s;
	    for(int i=0;i<n;i++)
	    {
	        cin >> s;
	        if(s == "cakewalk")
	        {
	            cakewalk++;
	        }
	        if(s=="simple")
	        {
	            simple++;
	        }
	        if(s=="easy")
	        {
	            easy++;
	        }
	        if(s=="easy-medium")
	        {
	            easyMedium++;
	        }
	        if(s=="medium-hard")
	        {
	            mediumHard++;
	        }
	        if(s=="medium")
	        {
	            medium++;
	        }
	        if(s=="hard")
	        {
	            hard++;
	        }
	    }
	    
	    if(cakewalk !=0 && simple != 0 && easy !=0 && (easyMedium != 0 || medium != 0) && (mediumHard != 0 || hard!=0))
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
