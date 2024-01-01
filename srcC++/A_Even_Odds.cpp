/**
 *   author:  Dearone
 *   created: 11/12/23 20:15:33
 **/
#include <bits/stdc++.h>
#include <vector>
using namespace std;

#ifdef DEBUG
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll long long
#define br '\n'

ll n, k, odd;
vector<ll> num;
void solve()
{
      cin >> n >> k;
      if (n > 1)
      {
            if (n % 2 == 0) odd = n / 2;
            else odd = (n / 2) + 1;
            if(k <= odd)cout << (k*2)-1 << br;
            else cout << (k-odd)*2 << br;
      }
      else cout << 1 << br;
}

int main()
{
      ios::sync_with_stdio(false);
      cin.tie(0);
      int tt = 1;
      // cin >> tt;
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