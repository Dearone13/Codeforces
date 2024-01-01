/**
 *   author:  Dearone
 *   created: 08/12/23 15:52:14
 **/
#include <bits/stdc++.h>
#include <vector>
using namespace std;

#ifdef DEBUG

#else
#define debug(...) 42
#endif

#define ll long long
#define br '\n'

int n, sum, sum2, cnt = 0;
vector<int> a;
bool flag = true;

void solve()
{
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      int aux;
      cin >> aux;
      sum += aux;
      a.push_back(aux);
   }
    sum = sum/2;
      sort(a.begin(), a.end(), greater<int>());
      for (int i = 0; i < n ; i++) {
         if (sum2 <= sum){
            sum2 += a[i];
            cnt++;
            //cout << sum2 <<" "<< cnt <<" "<< a[i]<< br;
         }else{
            break;
         }
      }
      cout << cnt <<br;
}

   int main()
   {
      ios::sync_with_stdio(false);
      cin.tie(0);
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