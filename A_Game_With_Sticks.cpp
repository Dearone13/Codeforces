/**
 *   author:  Dearone
 *   created: 15/01/24 09:19:33
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



void solve() {
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef LOCAL
      cout << "Case #" << nc << ": ";
      solve();
#else
      solve();
#endif
   }
   return 0;
}