#include <iostream>
#include <vector>
#include <algorithm>

class Tensor {
public:
    void sort(std::vector<int>& input) {
        std::sort(input.begin(), input.end());
        for (const auto& value : input) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
};

void test() {
    Tensor tensor;
    std::vector<int> testVector1 = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    std::cout << "Original Vector: ";
    for (const auto& value : testVector1) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    std::cout << "Sorted Vector: ";
    tensor.sort(testVector1);
}

int main() {
    test();

    return 0;
}
