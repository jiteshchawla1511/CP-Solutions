#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
        int T;
        cin >> T;
        while (T--)
        {
                int n;
                cin >> n;
                string corrAns;
                cin >> corrAns;
                string chefAns;
                cin >> chefAns;
                vector <int> w(n + 1);
                for (int i = 0; i <= n; ++i)
                        cin >> w[i];
                int cntCorr = 0;
                for (int i = 0; i < n; ++i)
                        if (corrAns[i] == chefAns[i])
                                ++cntCorr;
                if (cntCorr == n)
                        cout << w[n] << endl;
                else
                {
                        int ans = 0;
                        for (int i = 0; i <= cntCorr; ++i)
                                ans = max(ans, w[i]);
                        cout << ans << endl;
                }
        }
        return 0;
}
