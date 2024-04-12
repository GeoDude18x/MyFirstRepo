
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int randomNumber = 0;
    int guess = 0;
    int numberOfGuesses = 0;
    int lowerBound = 1, upperBound = 100;

    srand(time(NULL));
    randomNumber = lowerBound + rand() % (upperBound - lowerBound + 1);

    printf("Guess the Number Game\n");
    printf("I'm thinking of a number between %d and %d.\n", lowerBound, upperBound);

    do {
        printf("Enter your guess: ");
        scanf_s("%d", &guess);
        numberOfGuesses++;

        if (guess > randomNumber) {
            printf("Too high! Try again.\n");
        }
        else if (guess < randomNumber) {
            printf("Too low! Try again.\n");
        }
        else {
            printf("Congratulations! You guessed the number in %d attempts!\n", numberOfGuesses);
        }

    } while (guess != randomNumber);

    return 0;

}