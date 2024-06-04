#include <iostream>
#include <vector>

void printVector(std::vector<int> v) {
    std::cout << "[";
    for(auto e : v){
        std::cout << e << "," << std::endl;
    }
    std::cout << "]\n" << std::endl;
}

int main() {
    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = {4, 5, 6};
    std::vector<int> v3 = {7, 8, 9};
    printVector(v1);
    printVector(v2);
    printVector(v3);
    return 0;
}