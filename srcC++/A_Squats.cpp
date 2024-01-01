/**
 *   author:  Dearone
 *   created: 05/11/23 09:23:20
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


const int N = 2e2 ;
char Ham[N];
int n;
int contm, contM;
void solve() {
   cin >> n;
   for (int i = 0; i < n; i++) {
      cin >> Ham[i];
      if(Ham[i] == 'X'){
         contM++;
      }else{
         contm++;
      }
   }
   if(contM == n/2){
      cout <<"0\n" << Ham;
   } else if(contM > contm){
      int can =contM - n/2;
      //int aux;
      for (int i = 0, j= 0; j < can; i++) {
          if(Ham[i] == 'X'  ){
              Ham[i] = 'x';
              j++;
          }
      }
      cout << can << br << Ham;
   }else{
      int can2 = contm-n/2;
      for (int i =0 ,d = 0; d < can2; i++) {
         if(Ham[i] == 'x'){
             Ham[i] = 'X';
             d++;
         }
      }
      cout << can2 << br << Ham;

   }
   for (int i = 0; i < n ; i++) {

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