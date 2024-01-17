/**
 *   author:  Dearone
 *   created: 15/01/24 09:50:55
**/
#include <bits/stdc++.h>
#include <vector>
using namespace std;

#ifdef DEBUG
#else
#define debug(...) 42
#endif

#define ll  long long
#define br  '\n'
//Solucionado
int t;
void solve() {
   cin >> t;
   int x,y;
   while(t--){
      vector<int> xv;
      vector<int> yv;
      for (int i = 0; i < 4; i++) {
         cin >> x >> y;
         // cout << x << " " << y << " " ;
         xv.push_back(x);
         yv.push_back(y);
      }
      // for (int e : yv ){
      //    cout << e << br;
      // }
      
      sort(yv.begin(),yv.end());
      cout << abs(yv[0] - yv[3]) * abs(yv[0] - yv[3]) << br;
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