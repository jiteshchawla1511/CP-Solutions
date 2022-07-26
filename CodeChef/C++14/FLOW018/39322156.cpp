#include <iostream>
using namespace std;
int fact(int n)
{
    int fact =1;
    int i =1;
    while(i<n+1)
    {
        fact = fact*i;
        i = i + 1;
    }
    return fact;
}

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        cout<< fact(n)<<endl;
        
        
    }
    
	return 0;
}
