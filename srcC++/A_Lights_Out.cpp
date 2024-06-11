/**
 *   author:  Dearone
 *   created: 27/01/24 21:06:55
 **/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#ifdef DEBUG
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll long long
#define br '\n'

int const N = 3;
int gol[N][N]; // la entrada tiene sentido que sean numeros
int lights[N][N] = {{1, 1, 1},
                    {1, 1, 1},
                    {1, 1, 1}};
void solve()
{
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cin >> gol[i][j];
      }
   }

   for (int i = 0; i < N; i++)
   {
      for (int j = 0; j < N; j++)
      {
         cout << lights[i][j];
      }
      cout << br;
   }
}

int main()
{
   // ios::sync_with_stdio(false);
   // cin.tie(0);
   int tt = 1;
   // cin >> tt;
   for (int nc = 1; nc <= tt; nc++)
   {
#ifdef LOCAL
      cout << "Case #" << nc << ": ";
      solve();
#else
      solve();
#endif
   }
   return 0;
}