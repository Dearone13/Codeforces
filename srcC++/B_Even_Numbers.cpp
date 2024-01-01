/**
 *   author:  Dearone
 *   created: 24/10/23 09:17:51
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

void solve() {
   cin >> n;
   if(n == 1){
      cout << -1 << br;
   }else{
      for (int i = 1; i <= n; i++) {
         if(i % 2 == 0){
            cout << i << br;
         }
      }

   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   //cin >> tt;
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