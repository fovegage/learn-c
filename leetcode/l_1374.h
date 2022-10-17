//
// Created by 高哲 on 10/17/22.
//

#ifndef LEARN_C_L_1374_H
#define LEARN_C_L_1374_H

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

#endif //LEARN_C_L_1374_H
