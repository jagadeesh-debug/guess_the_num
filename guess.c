#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguess=1;
    srand(time(0));
    number=rand()%100+1;
   do
   {
    printf("guess the number below 100 and above 0\n");
    scanf("%d",&guess);
    if(guess<number)
    {
        printf("you are suggested to guess gretaer number\n");
    }
    else if(guess>number)
    {
        printf("you are suggested to guess lower number\n");
    }
    else
    {
       printf("hurrah you guess the correct number in %d attempts",nguess);
    }
    nguess++;
    }
    while(guess!=number);
    return 0;
}


