/**
 *   author:  Dearone
 *   created: 06/11/23 07:59:59
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll  long long
#define br  '\n'

const int N = 1e5 + 10;
int n,b,d,orange,ans, a[N];
void solve()
{
    cin >> n >> b >> d;
    for(int i = 0; i < n ; i++)
    {
        cin >> a[i];
        if(a[i]<=b)
        {
            orange += a[i];
//            cout << "oran: " << orange << br;
        }
        if(orange>d)
        {
            ans++;
            orange = 0;
//            cout <<"ans: " << ans << br;
        }

    }
    cout << ans << br;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt = 1;
    //cin >> tt;
    for (int nc = 1; nc <= tt; nc++)
    {
#ifdef LOCAL
        cout << "Case #" << nc << ": ";
        solve();
#else
        solve();
#endif
    }
    return 0;
}
