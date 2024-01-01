/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 31/10/23 09:29:06
**/
#include <bits/stdc++.h>

#define ll  long long
#define br  '\n'

using namespace std;
int a,b,c,t;
void solve(){
   double arit = (double)(3*(a+c))/2;
   int aux= arit;
   //cout << arit << aux;
   if((double)arit-aux == 0.0){
      cout << "YES\n";
   }else{
      cout << "NO\n";
   }
}
int main() {
   cin >> t;
   while(t--){
      cin >> a >> b >> c;
      solve();
   }
   return 0;
}