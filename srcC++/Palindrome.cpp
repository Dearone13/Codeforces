/**
 *   author:  Dearone
 *   created: 24/10/23 09:12:57
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

int n;


void solve()
{
    cin >> n;
    string n2 = to_string(n);
    reverse(n2.begin(),n2.end());
    while(*n2.begin() == '0')
    {
        n2.erase(n2.begin());
    }
    if(n2 == (to_string(n)))cout << n2 << "\n"<< "YES\n" ;
    else cout << n2 << "\n"<< "NO\n" ;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    #ifdef LOCAL
    freopen("input.txt","r",stdin);
    #endif
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
