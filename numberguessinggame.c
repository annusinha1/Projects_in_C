#include <stdio.h>    
int main() {
    int number, guess , i;
   number = 23; 

    i=1;
    while((guess != number) && (i <= number)) {
        printf("\nTake a guess (between 1 and %d): ", number);    
        scanf("%d",&guess);
        if (guess == number) {
            printf("Congratulations! You guessed the right number!\n");
        } else if (guess > number) {
            printf("Your guess is too high. Try again:\n");
        }
        else{
            printf("Your guess is too low. try again.\n");
        }
        ++i;
    }
	return 0;
}