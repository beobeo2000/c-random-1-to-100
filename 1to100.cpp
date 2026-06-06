#include <iostream>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    
    // Set the inclusive range from 1 to 100
    std::uniform_int_distribution<int> distrib(1, 100);

    int random_num = distrib(gen);
    std::cout << "Random number (1-100): " << random_num << std::endl;

    return 0;
}
