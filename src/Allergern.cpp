/**
*   █▀█  █▀▀▄ ─▀─ ▀▀█▀▀ █▀▀ ▄▀ ▀▄
*   ─▄▀  █▀▀▄ ▀█▀ ──█── ▀▀█ █─ ─█
*   █▄▄  ▀▀▀─ ▀▀▀ ──▀── ▀▀▀ ▀▄ ▄▀
**/

#include <bits/stdc++.h>
using namespace std;
#define long  long long
long n, d;
 
void solve() {
   cin >> n >> d;
   cout << min((long) ceil(log2(n)), d + 1) << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt;
   cin >> tt;
   while (tt--) {
      solve();
   }
   return 0;

}