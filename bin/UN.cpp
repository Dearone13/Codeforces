#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include  <string.h>
class Solution {
public:
    int main() {
      int t = 0;
      cin >> t;
      while(t-- ){
         int n = 0;
         cin >>n;
         solve(n);
      }
        return 0;
    }

    int solve(int n) {
      string ans = "";
      if(n < 10){
         cout << n << endl; 
      }else if(n > 17){
         cout << "-1" << endl;
      }else{
            ans = to_string(n%10+1)+"9";
            cout << ans << endl;
      }
        return 0;
    }
};

int main() {
    Solution solution;
    return solution.main();
}