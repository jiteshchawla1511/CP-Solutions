#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
      int n;
      cin>>n;
      int flag=0;
      int i=0;int j=n-1;
      vector<int> a(n);
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
     if(a[0]!=1){
         flag=1;
     }
     else{
         while(i<j){
           if(a[i]!=a[j]){
               flag=1;break;
           }else if((a[i]!=a[i+1]) && ((a[i]+1)!=a[i+1])){
              flag=1;break;
          }
          i++;
          j--;
         }
      if(a[i]!=7){
            flag=1;
          }
     }
       if(flag==1){
          cout<<"no"<<endl;
      }else{
          cout<<"yes"<<endl;
      }
    }
	 return 0;
  }




