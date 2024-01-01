#include <iostream>
using namespace std;
class wl{
   // main() is where program execution begins.
static int main() {
   int n;
   while(n-- > 0){
      string w;
      std::cin>> w;
      solve(w);
   }
   return 0;
}
static int solve(string w){
   int l = w.length();
   string f = (l>=10)?std::to_string(w[0])+std::to_string(l)+std::to_string(w[l-1]):w;
   std::cout<< f << std::endl;
   return 0;
}
};
