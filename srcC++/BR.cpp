#include <bits/stdc++.h>
#include <vector>
#include <set>;
using namespace std;

#ifdef DEBUG
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll  long long
#define br  '\n'

int t,n,k;

void solve()
{
    cin >> t;
    while(t--)
    {
        vector<int> round;
        cin >> n >> k;
        int cnt = 1, ans = 1;
        for(int i = 0; i <n; i++)
        {
            int aux = 0;
            cin >> aux;
            round.push_back(aux);
        }
        sort(round.begin(),round.end(),greater<int>());
        for(int i = 0; i < n-1; i++)
        {
            if(round[i]-round[i+1] > k)
            {
               //cout << " >k: "<<round[i] << " "<<round[i+1]<<" "<< cnt <<" ";
               cnt =1;


            }
            else
            {
                ++cnt;
                 //cout << " <=k: "<<round[i] << " "<<round[i+1]<<" "<< cnt <<" ";
            }
            ans = max(ans,cnt);
        }
        //cout <<br <<" ans: "<< n-ans << br;
        cout << n-ans << br;

    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt = 1;
    //cin >> tt;
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
