/**
 *   author:  Dearone
 *   created: 24/10/23 09:25:33
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
const int N  = 1e3+7;
int n, arr[N];


void solve() {
    cin >> n;
   for (int i = 0; i < n ; i++) {
      cin >> arr[i];
   }
   int even = 0, odd =0, posti = 0, neg = 0;
   for (int i = 0; i < n ; i++) {
      if(arr[i] == 0){
         even++;
         continue;
      }else if(arr[i] > 0 ){
         posti++;
         if(arr[i] % 2 == 0){
            even++;
         }else{
            odd++;
         }
      }else {
         neg++;
         if(abs(arr[i]) % 2 == 0){
            even++;
         }else{
            odd++;
         }
      }
   }
   cout << "Even: " << even <<br;
   cout << "Odd: " << odd <<br;
   cout << "Positive: " << posti <<br;
   cout << "Negative: " << neg <<br;

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