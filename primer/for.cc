#include <iostream>

int main() {
    int value, sum = 0;
    /*
        While loop will run until, it encounters EOF or a character thats not int
    */
    while(std::cin >> value)
        sum+=value;
    std::cout << std::endl;
    std::cout << sum << std::endl;
    return 0;
}