#include <iostream>
using namespace std;
#include <vector>
class wl{
   // main() is where program execution begins.
   public:
   static int main() {
   int n = 0;
   std::cin>> n;
   while(n-- > 0){
      string w;
      std::cin>> w;
      solve(w);
   }
   return 0;
   }
   static int solve(string w){
   int l = w.length();
   string f = (l>10)?w.substr(0,1)+std::to_string(l-2)+w.substr(l-1,1):w;
   std::cout<< f << std::endl;
   return 0;
   }


};
int main() {
    return wl::main();
}
