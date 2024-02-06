/**
 *   author:  Dearone
 *   created: 06/02/24 10:49:12
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

int t = 0;
void solve() {
   cin >> t;
   //cout << t << br;
   while (t--)
   {
      int n;
      string s;
      vector<int> str;
      cin >> n >> s;
      //cout << n << " " << s << " " << t << br;
      for (int i = 0; i < n; i++) {
         if(s[i] == 'B'){
            str.push_back(i);
         }
      }
      if(!str.empty()){
         sort(str.begin(), str.end());
         int s = str.size() - 1;
         cout << (str[s] - str[0]) + 1 << br;
      }else{
         cout << 0 << br;
      }

   }

   
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