#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a,b,k;
        cin>>n>>a>>b>>k;
        long long lcm=(a*b)/(gcd(a,b));
        long long c=(n/a)-(n/lcm);
        long long d=(n/b)-(n/lcm);
        if((c+d)<k){
            cout<<"Lose"<<endl;
        }
        else{
            cout<<"Win"<<endl;
        }
    }
}