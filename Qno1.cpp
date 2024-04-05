#include <iostream>
#include <vector>
#include <algorithm>

void rvrs(std::vector<int>& vct) {
    std::reverse(vct.begin(), vct.end());
}

void printVector(const std::vector<int>& vct) {
    for (const auto& element : vct) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    std::cout << "Original Vector: ";
    printVector(numbers);
    
    rvrs(numbers);
    
    std::cout << "Reversed Vector: ";
    printVector(numbers);

    return 0;
}
