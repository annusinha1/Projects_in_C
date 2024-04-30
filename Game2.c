// Stone , Paper and Scissor game
#include <stdio.h>

int game(int, int);

int main(){
     int ROCK = 1;
     int PAPER = 2;
     int SCISSORS = 3;
    int Player1, Player2, winner;
    printf("Player1 Enter your choice: 1 , 2, 3 : ");
    scanf("%d", &Player1);

    printf (" Player 2 Enter your choice: 1, 2, 3 : ");
    scanf("%d", &Player2);
    winner = game(Player1, Player2);
    if (winner == 1) {
    printf("Player 1 wins!\n");
  } else if (winner == 2) {
    printf("Player 2 wins!\n");
  } else {
    printf("It's a tie!\n");
  }
  return 0; 
}

int game(int Player1, int Player2){
    int winner,ROCK, SCISSORS , PAPER;
 if (Player1 == ROCK && Player2 == SCISSORS) {
    winner = 1;
  } else if (Player1 == SCISSORS && Player2 == PAPER) {
    winner = 1;
  } else if (Player1 == PAPER && Player2 == ROCK) {
    winner = 1;
  } else if (Player1 == Player2) {
    winner = 0;
  } else {
    winner = 2;
  }   
}
