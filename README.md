▶️Motive of the Code - The main objective of this code is to create a "Guess the Number" game. In this game, the program randomly selects a number between 1 and 100, and the user has to guess what that number is. After each guess, the program gives feedback on whether the guess was too high, too low, or correct. The game continues until the user guesses the correct number.

1. **Including Necessary Libraries:**
   ```
   #include <iostream>
   #include <cstdlib>
   #include <ctime>
   ```
   - `iostream` is used for input and output operations.
   - `cstdlib` is used for random number generation.
   - `ctime` is used to seed the random number generator with the current time.

2. **Main Function:**
   ```
   int main() {
   ```
   The main function is the entry point of the program.

3. **Seeding the Random Number Generator:**
   ```
   std::srand(std::time(nullptr));
   ```
   - `std::time(nullptr)` returns the current time.
   - `std::srand()` seeds the random number generator with the current time to ensure that we get different random numbers each time the program runs.

4. **Generating a Random Number:**
   ```
   int number = std::rand() % 100 + 1;
   ```
   - `std::rand()` generates a random number.
   - `% 100` ensures the number is between 0 and 99.
   - `+ 1` adjusts the range to be between 1 and 100.

5. **Initializing Variables:**
   ```
   int guess = 0;
   int attempts = 0;
   ```
   - `guess` is used to store the user's guess.
   - `attempts` is used to count the number of guesses the user has made.

6. **Prompting the User:**
   ```
   std::cout << "Guess the number (it's between 1 and 100): ";
   ```
   This line prompts the user to start guessing.

7. **Guessing Loop:**
   ```
   while (guess != number) {
       std::cin >> guess;
       attempts++;
       if (guess > number) {
           std::cout << "Too high! Try again: ";
       } else if (guess < number) {
           std::cout << "Too low! Try again: ";
       } else {
           std::cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
       }
   }
   ```
   - The loop continues until the user guesses the correct number.
   - `std::cin >> guess;` reads the user's guess.
   - `attempts++` increments the number of attempts.
   - The `if` statements check if the guess is higher, lower, or equal to the generated number.
   - If the guess is too high or too low, it prompts the user to try again.
   - If the guess is correct, it congratulates the user and exits the loop.

8. **End of Program:**
   ```
   return 0;
   }
   ```
   The program returns 0, indicating successful execution.

### Summary
- The program generates a random number between 1 and 100.
- It repeatedly prompts the user to guess the number.
- It provides feedback on whether the guess is too high or too low.
- It counts the number of attempts.
- It congratulates the user when the correct number is guessed.
