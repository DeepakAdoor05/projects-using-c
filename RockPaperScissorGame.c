#include<stdio.h>
#include<stdlib.h> // to call fns srand and rand
#include<time.h> // to get random value in time
int main()
{
    int choice,c_chose,win=0,tie=0;
    printf("Welcome to RPS Game\n");
    printf("-------------------\n");
    printf("ROCK PAPAER SCISSOR\n");
    printf("~~~~~~~~~~~~~~~~~~~\n");
    printf("Type 0 for ROCK\nType 1 for PAPER\nType 2 for SCISSOR\n");
    for (int  i = 0; i < 5; i++)
    {
        printf("Enter your choice:");
        scanf("%d", &choice);
        if (choice > 2 || choice < 0)
        {
            printf("Hey fool its an invalid number !!\n");
            i--;
        }
        else
        {
            srand(time(0)); // Set the seed for random number generation.
            c_chose = rand()%3; // Generate a random value from (0,1,2).
            printf("Computer chose:%d\n",c_chose);
            if (c_chose == choice)
            {
                printf("DRAW\n");
                tie++;
            }
            else if(c_chose == 0 || choice == 2)
            {
                printf("You lose\n");
            }
            else if (c_chose == 2 || choice == 0)
            {
                printf("You win\n");
                win++;
            }
            else if(c_chose > choice)
            {
                printf("You lose\n");
            }
            else if(c_chose > choice)
            {
                printf("You win\n");
                win++;
            }
        }
    }
    printf("You won %d times\n",win);
    printf("You lose %d times\n",-(win+tie-5));
    if (win > (-(win+tie-5)))
    {
        printf("-----------------\n");
        printf("YOU ARE THE WINNER");
    }
    else if (win == (-(win+tie-5)))
    {
        printf("WELL TRIED MATCH TIED");
    }
    else
    {
        printf("-----------------\n");
        printf("YOU LOSE");
    }
}

/*
      OUTPUT

Welcome to RPS Game
-------------------
ROCK PAPAER SCISSOR
~~~~~~~~~~~~~~~~~~~
Type 0 for ROCK
Type 1 for PAPER
Type 2 for SCISSOR
Enter your choice:1
Computer chose:2
You win
Enter your choice:0
Computer chose:0
DRAW
Enter your choice:2
Computer chose:1
You lose
Enter your choice:1
Computer chose:1
DRAW
Enter your choice:0
Computer chose:2
You win
You won 2 times
You lose 1 times
-----------------
YOU ARE THE WINNER
*/