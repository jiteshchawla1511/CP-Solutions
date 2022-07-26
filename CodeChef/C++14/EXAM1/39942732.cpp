#include<bits/stdc++.h>
#include<iostream>
using namespace std;

        
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s, u;
        cin>>s>>u;
        int count = 0;
        
        int k = 1;
        for(int i = 0; i < n; i++) {
            
            if(s[i] == u[i]) {
                count++;
                
            }
            else if(u[i] != 'N'){
                i++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}