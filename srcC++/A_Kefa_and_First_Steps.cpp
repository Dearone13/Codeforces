/**
 *   author:  Dearone
 *   created: 19/01/24 19:39:48
**/
#include <bits/stdc++.h>
#include <vector>
using namespace std;

#ifdef DEBUG
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll  long long
#define br  '\n'



void solve() {
      //Solución por josuerom :)
      int cnt = 0, ans = 0, n;
      cin >> n;
      vector<int> a(n);
      cin >> a[0];
      for (int i = 1; i < n; i++)
      {
            cin >> a[i];
            //Si a[i]  es mayor o igual que a[i-1] 
            if (a[i] >= a[i - 1])
            //Sume 1
                  cnt++;
            else
            //Sino contador es igual a 0
                  cnt = 0;
            //Aca comprueba el maximo se cada contador y obtiene el maximo  
            ans = max(cnt, ans);
      }
      // cout << "Ans: " << ans << endl;
      if (ans == 0)
      //Si es igual a cero entonces es 1
            cout << 1 << endl;
      else
      //sino el reusltado le suma 1
            cout << ans + 1 << endl;
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