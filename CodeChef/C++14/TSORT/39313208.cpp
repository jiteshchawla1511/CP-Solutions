#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int A[t];
    
    for(int i=0;i<t;i++)
    {
        cin>>A[i];
    }
    sort(A,A+t);
    for(int j=0;j<t;j++)
    {
        cout<<A[j]<<endl;
    }
    
    
   
	return 0;
}
