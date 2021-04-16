#include <stdio.h>
#include <stdlib.h>

int main() {

    srand(time(NULL));

    int value = rand() % 20; // random number between 1 and 20
    int guess;
    int guessesLeft = 3;

    printf("Hello! I am thinking of a number between 1 and 20\n");

    sleep(2);

    do {
        printf("You have %d guesses left.\n", guessesLeft);
        sleep(1);
        printf("Take a guess: ");
        scanf("%d", &guess);
        if (guess > value) {
            printf("Your guess was too high!\n");
        } else if (guess < value) {
            printf("Your guess was too low!\n");
        }
        guessesLeft -= 1;
    } while (guess != value && guessesLeft > 0);

    if (guess == value) {
        printf("That was correct! I was thinking about the number %d.", value);
    } else {
        printf("Too bad! The number was %d", value);
    }

    return 0;
}
