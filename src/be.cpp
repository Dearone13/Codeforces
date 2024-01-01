#include <iostream>
#include <string>
using namespace std;

static void solve(std::string* w, int m){
      for (int i = 0; i < m; i++)
      {
         std::cout<<w[i]<< std::endl;
      }
}
int main(){
   while(true){
      int m = 0;
      std::cin>>m;
      if(m == 0){
         break;
      }
      std::string* w= new std::string[m];
      for (int i = 0; i < m; i++)
      {
         string val = "";
         std::cin>>val;
         w[i] = val;
      }
      solve(w,m);
      delete[]w;
   }
      return 0;
}
