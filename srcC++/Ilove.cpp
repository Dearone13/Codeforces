/**
 *   author:  Dearone
 *   created: 25/11/23 13:32:14
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


ll n,d;
ll ans;
void solve() {
   cin >> n >> d;
   ans = n + 1;
   while(ans % 10 != d){
      ans++;
   }
   cout << ans ;

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