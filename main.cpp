#include <iostream>
#include "vector"
#include "assembly/asm.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> vec = {1, 2, 3};
    vec.push_back(5);
    cout << vec.capacity() << endl;

    cout << f2(111.11) << endl;
    return 0;
}
