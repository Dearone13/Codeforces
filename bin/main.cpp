#include <iostream>
#include <string>

class MyProgram {
public:
    static int main() {
        int n;
        std::cin >> n; // Agrega la entrada del valor de n
        while (n-- > 0) {
            std::string w;
            std::cin >> w;
            solve(w);
        }
        return 0;
    }

    static void solve(std::string w) {
        int l = w.length();
        std::string f = (l >= 10) ? std::to_string(w[0])+" " + std::to_string(l) +" "+ std::to_string(w[l - 1]) : w;
        std::cout << f << std::endl;
    }
};

int main() {
    return MyProgram::main();
}
