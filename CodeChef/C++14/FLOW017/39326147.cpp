#include <iostream>
using namespace std;
int secondLargest(int a , int b, int c)
{
    if(a>b && a>c)
    {
        if(b>c)
            return b;
        return c;
    }
    
    if(b>c && b>a)
    {
        if(a>c)
            return a;
        return c;
    }
    
    if(c>b && c>a)
    {
        if(b>a)
            return b;
        return a;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        cout<<secondLargest(a,b,c)<<endl;
    }
	return 0;
}
