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

#define ll  long long1
#define br  '\n'


int t, n;
void solve() {
   cin >> t;
   while(t--){
      cin >>n;
      string aux;
      cin >> aux;
      cout << "aux: "<<aux <<br;
      vector<char> num;
      int cont, pos;
      bool flag = false, enter = true;
      for (int i = 0; i < n; i++) {
         num.push_back(aux[i]);
         if(aux[i] == '1'&& enter){
            pos = i;
            enter = false;
         }
      }
      cout << "pos: " << pos;
      while(flag == false){
        for (int i = pos; i < n; i++) {
         if(num[i] == '1'){
            num[i] = '0';
         }else{
            num[i] = '1';
         }
        }
        vector<char>num2;
        copy(num.begin(),num.end(),back_inserter(num2));
        sort(num2.begin(),num2.end());
        flag = equal(num.begin(),num.end(),num2.begin());
        cont++;
      }
      cout << cont << br;
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