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


int cnt = 1 ;
int n = 1;
void solve() {
      cin >> n;
      //cout << n <<"  <--- valor n";
      vector<int> a;
      vector<int> lenght;
      for (int i = 0; i < n; i++) {
            int ai;
            cin >> ai;
            a.push_back(ai);
      }
      // for (int e : a)
      //       cout << e << " ";

      for (int j = 0; j < n; j++) {
            //cout << "Entro" << br;
            if( a[j+1] >= a[j]){
                 // cout << "Entro" <<clear br;
                  cnt += 1;
            }else{
                  lenght.push_back(cnt);
                  cnt = 1;
                  continue;
            }
      }

      //Ordenas de menor a mayor
      sort(lenght.begin(),lenght.end());
      int final = lenght.size();
      //cout << "Solución: " <<br;
      cout << lenght[final-1] << br;
      
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