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

#define ll  long long
#define br  '\n'


int const N = 3;
int gol[N][N]; // la entrada tiene sentido que sean numeros
int lights[N][N] = {{1,1,1},
{1,1,1},
{1,1,1}};
void solve() {
   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         cin >> gol[i][j];
      }
   }
   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         if(gol[i][j] != 0){
            //cout << "Valores: "  << gol[i][j] << i<<" "<<j<<  br;
            if ((gol[i][j] % 2 != 0 && lights[i][j] == 1) || (gol[i][j] % 2 == 0 && lights[i][j] == 0))
            {
               //cout << "Sección 2" << br;
               //cout << i <<" "<< j << br;
               int aux = 0;
               if(aux != lights[i][j]){ 
                  lights[i][j] = aux; 
                  //cout << lights[i][j] << br;
                  if (i + 1 < N)
                  {
                     
                     lights[i + 1][j] = (lights[i+1][j] == 1)? 0:1;
                     //cout << "Entre 1" << i + 1 <<" "<< lights[i + 1][j] << br;
                  }
                  if (i - 1 > 0)
                  {
                     lights[i - 1][j] = (lights[i-1][j] == 1) ? 0 : 1;
                     //cout << "Entre 2" << i - 1 << " " << lights[i - 1][j] << br;
                  }
                  if (j + 1 < N)
                  {
                     lights[i][j+1] = (lights[i][j+1] == 1) ? 0 : 1;
                     //cout << "Entre 3" << j + 1 << " " << lights[i][j+1] << br;
                  }
                  if (j - 1 > 0)
                  {
                     lights[i ][j-1] = (lights[i][j-1] == 1) ? 0 : 1;
                     //cout << "Entre 4" << j - 1 << " " << lights[i][j - 1] << br;
                  }

            }
            }
         else if ((gol[i][j] % 2 == 0 && lights[i][j] == 1) || (gol[i][j] % 2 != 0 && lights[i][j] == 0))
         {
            //cout << "Seccion 2" << br ;
            int aux = 1;
            if (aux != lights[i][j])
            {
               lights[i][j] = aux;
               //if (i + 1 < N)
               {

                  lights[i + 1][j] = (lights[i + 1][j] == 1) ? 0 : 1;
                  //cout << "Entre 1" << i + 1 << " " << lights[i + 1][j] << br;
               }
               if (i - 1 > 0)
               {
                  lights[i - 1][j] = (lights[i - 1][j] == 1) ? 0 : 1;
                  //cout << "Entre 2" << i - 1 << " " << lights[i - 1][j] << br;
               }
               if (j + 1 < N)
               {
                  lights[i][j + 1] = (lights[i][j + 1] == 1) ? 0 : 1;
                  //cout << "Entre 3" << j + 1 << " " << lights[i][j + 1] << br;
               }
               if (j - 1 > 0)
               {
                  lights[i][j - 1] = (lights[i][j - 1] == 1) ? 0 : 1;
                  //cout << "Entre 4" << j - 1 << " " << lights[i][j - 1] << br;
               }
            }
         }
      }else  continue;
   }
}
for (int i = 0; i < N; i++) {
   for (int j = 0; j < N; j++) {
      cout << lights[i][j];
   }
   cout << br;
}
}


int main() {
   // ios::sync_with_stdio(false);
   // cin.tie(0);
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