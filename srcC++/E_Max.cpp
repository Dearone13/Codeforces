/**
 *   author:  Dearone
 *   created: 24/10/23 10:03:12
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

const int N = 1e3 + 10;
int arr[N], n;
void solve() {
   cin >> n;
   for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }
   sort(arr,arr+N,greater<int>());
   cout << arr[0] << br;
}
int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
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