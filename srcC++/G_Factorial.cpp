/**
 *   author:  Dearone
 *   created: 25/10/23 22:57:46
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


int t;
ll n;
ll factorial(ll f){
   if(f == 0){
      return 1;
   }else{
      return f*factorial(f-1);
   }
}
void solve(ll d) {
   ll ans = factorial(d);
   cout << ans << br;
}

int main() {
   cin >> t;
   while(t-- > 0){
      cin >> n;
      solve(n);
   }
   return 0;
}