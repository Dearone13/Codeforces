#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
//Dearone
class Solution {
public:
    int main() {
      int t = 0;
         cin >> t;
      while(t-- > 0){
         long long n = 0;
         cin >> n;
         solve(n);
      }
      return 0;
      }

    int solve(long long n) {
      //std::cout << n << std::endl;
      int ans = 0;
      while(n>1){
        if(n % 6 == 0){
          n /= 6;
        }else if(n % 3 == 0){
          n*= 2;
        }else{
          ans= -1;
          break;
        }
        ans++;
      }
       cout << ans << endl;
        return 0;
    }
};

int main() {
    Solution solution;
    return solution.main();
}