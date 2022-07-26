#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int sum = 0;
        while (n > 0)
        {
            int dig;
            dig = n % 10;
            sum = sum + dig;
            n = n / 10;
        }
        cout<<sum<<"\n";
    }

    return 0;
}