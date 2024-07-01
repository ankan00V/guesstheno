//Make a Guess a Number Game With the help of C++
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));
    int number = std::rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    std::cout << "Guess the number (its between 1 and 100): ";

    while (guess != number) {
        std::cin >> guess;
        attempts++;
        if (guess > number) {
            std::cout << "well Too high! Try again: ";
        } else if (guess < number) {
            std::cout << "well Too low! Try again: ";
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }
    }

    return 0;
}