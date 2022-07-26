#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	 cin.get();
	while(t--)
	{
	    string str;
	    getline(cin,str);
	    string str1 = "";
	    string res = "";
	    int l = str.length();
	    for(int i=0;i<l;i++)
	    {
	        if(str[i] != ' ')
	        {
	            str1 += tolower(str[i]);
	        }
	        else
	        {
	            char ch = str1[0];
	            ch = toupper(ch);
	            res += ch;
	            res += ". ";
	            str1 = "";
	        }
	    }
	     str1[0] = toupper(str1[0]);
        res+=str1;
        cout<<res<<endl;
	}
	return 0;
}
