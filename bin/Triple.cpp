#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
class wl{
   // main() is where program execution begins.
   public:
   static int main() {
      int t ;
      std::cin>>t;
      while(t-- >0){
         int n = 0;
         std::cin>> n;
         std::vector<int> a;
         for (int i = 0; i < n; i++)
         { int d;
           std::cin>>d;
            a.push_back(d);
         }
         solve(a, n);
      }
   return 0;
   }
   static int solve(std::vector<int>& a, int n){
      int cnt = 0;
      int win = 0; 
      std::sort(a.begin(), a.end());
   //   for (int elemento : a) {
   //      std::cout << elemento << " ";
   //  }
      for (int i = n-1; i >=1; i--)
      {
         int j = i-1;
         cnt = ((a[i] != a[j])?0: 1 + cnt );
         if(cnt ==2){
            win = a[i];
            break;
         }
      }
      std::cout<< ((win != 0)?std::to_string(win):"-1" )<<std::endl;
   return 0;
   }


};
int main() {
    return wl::main();
}
