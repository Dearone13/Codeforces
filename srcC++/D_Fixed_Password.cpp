/**
 *   author:  Dearone
 *   created: 24/10/23 09:46:57
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


unsigned int n;
void solve() {
   while(true){
      cin >> n;
      if(n == 1999){
         cout << "Correct" << br;
         return;
      }else{
         cout << "Wrong" << br;
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