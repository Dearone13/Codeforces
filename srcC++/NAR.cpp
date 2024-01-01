/**
 *   author:  Dearone
 *   created: 06/11/23 07:59:59
**/
#include <bits/stdc++.h>
#include <list>
using namespace std;

#ifdef DEBUG
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll  long long
#define br  '\n'

int t,n,k;

void solve()
{
    cin >> t;
    while(t--)
    {
        list<int> round;
        int i,aux;
        cin >> n >> k;
        //cout << n << k;
        while(++i <= n){
            cin >> aux;
            round.push_back(aux);
        }
        round.sort(greater<int>());
        for(int e:round){
         cout << e << " ";
        }

    }

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
