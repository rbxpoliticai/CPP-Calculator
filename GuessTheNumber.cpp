#include <iostream>

int main(){

    srand(time(NULL));

    int num = (rand() % 10) + 1;
    int guess;
    int tries;

    do{
    std::cout << "Enter your guess: ";
    std::cin >> guess;
    } while(guess != num);

    std::cout << "\nYou guessed the number correctly in " << tries << "tries! The number was " << num;


    return 0;
}
