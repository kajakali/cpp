# include <iostream>

int main() {
    int size ; //normally initialize variables, like this: int size{5}; if you don't they might be full of random numbers
    std::cout << "the size right now is: " << size;
    std::cout << "enter a number please: ";
    std::cin >> size;
    std::cout << "size is :" << '\n' << size << std::endl;
    std::cout << "doubleSize is: " << (2*size) << std::endl;
    return 0;
} 