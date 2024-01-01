/**
 *   author:  Dearone
 *   created: 25/11/23 14:13:23
**/
using namespace std;
#include <bits/stdc++.h>



#ifdef DEBUG
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll  long long
#define br  '\n'

int n, q;
string w,w1,w2;
vector<string>words;
vector<pair<string,string>>rangue;
void solve() {
   cin >> n >> q;
   for (int i = 0; i < n; i++) {
      cin >> w;
      words.push_back(w);
   }
   for (int d = 0; d < q; d++) {
      cin >> w1 >> w2;
      rangue.push_back(make_pair(w1,w2));
      vector<string>aux(words);
       //cout << "hola";
      for (int j = 0; j < n; j++) {
         int com1 =  lexicographical_compare(aux[j].begin(),aux[j].end(),rangue[d].first.begin(),rangue[d].first.end());
         int com2 = lexicographical_compare(aux[j].begin(),aux[j].end(),rangue[d].second.begin(),rangue[d].second.end());
         //cout << com1 << com2 << br;
         //cout << aux[j] << " - " << rangue[d].first << " : " << com1 << " - " << aux[j] << " - " << rangue[d].second << " : " << com2 << br;
          if (com1 <= 0 && com2 >= 0) {
              continue;
         }else{
                aux.erase(aux.begin()+j);
         }
      }
      cout << aux.size() <<br;
   }  
   
//   for (int i = 0; i < q; i++) {
//     std::cout << rangue[i].first << " " << rangue[i].second << std::endl;
//   }
   
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