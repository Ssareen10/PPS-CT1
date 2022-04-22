#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int randomnumber;
    int numberofguesses;
    int guess;
    time_t t;

    srand((int)time(&t));
    randomnumber=rand()%21;
    printf("\n this is a guessing game");
    printf("\nyou have to guess a number between 0-20 that i have choosen");
    for(numberofguesses=5;numberofguesses>0;numberofguesses--)
    {
        printf("\nYou have %d tr%s left",numberofguesses,numberofguesses==1 ? "y" : "ies");
        printf("\nEnter Your Number");
        scanf("%d",&guess);
        if(guess==randomnumber)
        {
            printf("\nCONGRATULATIONS the number was %d.",randomnumber);
            return 0;
        }
        else if(guess<0 || guess>20){
            printf("\nThe number is between 0-20");
        }
        else if(guess>randomnumber){
            printf("\nThe number is less then your guess");
        }
        else if(guess<randomnumber){
            printf("\nThe number is more then your guess");
        }
    }
    printf("\nSorry your chances are over the number was %d",randomnumber);
    return 0;
}