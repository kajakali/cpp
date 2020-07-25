# include <iostream>

void printSomething()
{
    std::cout << "I'm printing something from the printSomething function " << '\n';
}
void doADance()
{
    std::cout << "I'm dancing!" << '\n';
}

int main() {
    std::cout << "I'm the beginning of main " << '\n';
    printSomething();
    doADance();
    printSomething();
    std::cout << "I'm the end of main " << std::endl;
}