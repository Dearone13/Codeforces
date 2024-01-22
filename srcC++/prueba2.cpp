/**
 *   author:  Dearone
 *   created: 21/01/24 19:41:13
**/
#include <bits/stdc++.h>
using namespace std;

void solve() {
   int cnt = 0, ans = 0, n;
   cin >> n;
   vector<int>a(n);
   cin >> a[0];
   for (int i = 1; i < n; i++) {
      cin >> a[i];
      if(a[i] >= a[i-1]) cnt++;
      else cnt = 0;
      ans = max(cnt,ans);
   }
   //cout << "Ans: " << ans << endl;
   if(ans == 0)cout << 1 << endl;
   else cout << ans+1 << endl;


















   // int cnt;
   // int n;
   // cin >> n;
   // //cout << n <<"  <--- svalor n";
   // vector<int> a;
   // vector<int> lenght;
   // int ai;
   // for (int i = 0; i < n; i++)
   // {
   //    cin >> ai;
   //    a.push_back(ai);

   // } 
   
   // for (int j = 0; j < n-1; j++)
   // {
   //    if (a[j + 1] >= a[j] )
   //    {
   //       //cout << "Entro contador" <<endl;
   //       cnt += 1;
   //    }
   //    else
   //    {
   //       lenght.push_back(cnt);
   //       cnt = 0;
   //       continue;
   //    }
   // }
   // //cout << lenght.size();
   // if(lenght.size() == 0){
   //    cout << cnt+1 << endl; 
   // }else{
   //    // Ordenas de menor a mayor
   //    sort(lenght.begin(), lenght.end());
   //    int final = lenght.size() - 1;
   //    cout << lenght[final]+1 << endl;
   // }


   
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