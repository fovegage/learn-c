#include <iostream>
#include "vector"
#include "assembly/asm.h"

using namespace std;


int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> vec = {1, 2, 3};
    vec.push_back(5);
    cout << vec.capacity() << endl;

    cout << b << endl;
    cout << f2(11.11) << endl;
    testASM();
    return 0;
}
