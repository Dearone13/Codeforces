/**
 *   author:  Dearone
 *   created: 26/01/24 20:16:02
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

char c[30];
char l;
string llong;
string line;
vector<char> key = {
    'q',
    'w',
    'e',
    'r',
    't',
    'y',
    'u',
    'i',
    'o',
    'p',
    'a',
    's',
    'd',
    'f',
    'g',
    'h',
    'j',
    'k',
    'l',
    ';',
    'z',
    'x',
    'c',
    'v',
    'b',
    'n',
    'm',
    ',',
    '.',
    '/',
};

void solve()
{
   cin >> l >> c;
   int s = strlen(c);
   // for (char e : c)
   //    cout << e << " ";
   if(l == 'R'){
      for (int i = 0; i < s; i++) {
         for (int j = 0; j < 30; j++) {
            if(c[i] == key[j]){
               line.push_back(key[j - 1]);
            }
         }
      }
   }else{
      for (int i = 0; i < s; i++)
      {
         for (int j = 0; j < 30; j++)
         {
            if (c[i] == key[j])
            {
               line.push_back(key[j + 1]);
            }
         }
      }
   }
   cout << line << br;
}

int main() {
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