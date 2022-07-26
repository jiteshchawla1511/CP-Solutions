#include <bits/stdc++.h>
#define int long long int
#define nline '\n'
using namespace std;


void solve() {
    int n;
    cin >> n;
    int v[n];
    for(int i = 0;i <  n;i ++){
        cin >> v[i];
    }
    int ans = 0;
    for(int i = 0;i < n;i ++){
        int maxele = v[i];
        int minele = v[i];

        set<int> st;
        
        for(int j = i;j < n;j ++){
            int cnt = 0;
            st.insert(v[j]);
            maxele = max(maxele,v[j]);
            minele = min(minele,v[j]);
            if(j - i >= 2){
                int midval = (maxele + minele)/2;
                auto idx = st.lower_bound(midval);
                if(idx != st.end()){
                    int x = abs(maxele - *idx);
                    int y = abs(*idx - minele);
                    cnt = max(cnt,x * y);
                } 

                if(idx != st.begin()){
                    idx--;
                    int x = abs(maxele - *idx);
                    int y = abs(*idx - minele);
                    cnt = max(cnt,x * y);  
                }  
            }
            

            ans += cnt; 
        }
    }
    cout<<ans<<nline;
}
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
 
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
 
 
 
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}