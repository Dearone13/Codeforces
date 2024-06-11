/**
 *   author:  Dearone
 *   created: 11/06/24 12:08:35
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


int n,h,a;
vector<pair<int,int>> teams;
void solve() {
   cin >> n;
  for (int i = 0; i < n ; i++) {
     cin >> h >> a;
     teams.push_back(make_pair(h, a));
  }
  int cnn = 0;
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         if(teams[i].first == teams[j].second){
            cnn++;
         }
      }
   }
   cout << cnn << br;
}

int main() {
   // ios::sync_with_stdio(false);
   // cin.tie(0);
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