#include <iostream>
#include "vector"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> vec = {1, 2, 3};
    vec.push_back(5);
    cout << vec.capacity() << endl;
    return 0;
}
