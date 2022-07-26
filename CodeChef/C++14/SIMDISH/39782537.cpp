#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    set<string> set;
    while(t--)
    {
        string s;
        int i=4;
        
        while(i--)
        {
            cin>>s;
            set.insert(s);
        }
        
        i=4;
        
        string x;
        int count = 0;
        while(i--)
        {
            cin>>x;
            if(set.find(x)!=set.end())
                count++;
        }
        
        if(count>=2)
            cout<<"similar"<<endl;
        else
            cout<<"dissimilar"<<endl;
            
        set.clear();
    }
	return 0;
}
