#include <iostream>

class Example {
public:
    Example(int y = 10) : data(y) {
        // empty body
    } // end Example constructor

    int getIncrementedData() {
        return ++data; // Increment data before returning
    } // end function getIncrementedData

    void printData() const {
        std::cout << "Data is " << data << std::endl;
    } // end function printData

    static int getCount() {
        return count;
    } // end function getCount

    static void incrementCount() {
        count++;
    } // end function incrementCount

private:
    int data;
    static int count;
}; // end class Example

int Example::count = 0;

int main() {
    Example obj;
    obj.printData(); // Output the initial value of data

    int incrementedData = obj.getIncrementedData();
    std::cout << "Incremented data: " << incrementedData << std::endl;

    Example::incrementCount(); // Increment count using the static member function
    std::cout << "Count is " << Example::getCount() << std::endl;

    return 0;
}

