#include <iostream>
using namespace std;
int isPrimeNumber(int n) {
   bool isPrime = true;
   if(n==1)
   {
       isPrime=false;
   }
   else
   {
       for(int i = 2; i <= n/2; i++)
       {
           if(n%i==0)
           {
           isPrime=false;
           break;
               
           }
           
       }
   }
   return isPrime;
}


int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,d,c;
        cin >> a>>b;
        d=a+b;
        for(c=1; ;c++)
        {
            if(isPrimeNumber(c+d))
            {
                break;
            }
            
        }
        cout<<c<<endl;
    }
    
	return 0;
}
