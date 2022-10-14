#include "string"

using namespace std;


class Solution {
public:
    string generateTheString(int n) {

        if (n % 2 == 1) {
            string i(n, 'A');
        } else {
            string i(n, 'A');
            i += "c";

        }

        return std::string();
    }
};


