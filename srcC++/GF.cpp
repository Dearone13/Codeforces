/**
 *   author:  Dearone
 *   created: 08/11/23 11:25:21
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


   int n;
void solve() {

   cin >>n;
   vector<int>box;
   for(int i = 0; i < n; i++){
         int aux = 0;
         cin >> aux;
         box.push_back(aux);
   }
   sort(box.begin(), box.end());
   for(int e: box){
      cout << e << " ";
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