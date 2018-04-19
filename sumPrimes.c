#include<cs50.h>
#include<stdio.h>

bool isPrime(int);

int main(void)
   {
       int input =  get_int("Enter number: ");
    //   printf("I got %i\n", input);
       if (isPrime(input))
       {
           printf("%i is prime\n", input);
       }
    else
    {
        printf("%i is NOT prime\n", input);
    }
   }

bool isPrime(int num)
{
    for(int i = 2; i < num; i++)
    {
        if (num% i ==0) {              //find a number that it is divisible by...means it is not prime...return false

        }

         return false;
    }

    return true;
}


// Steps:
// 1) Test if a number is prime --
   //2) How to create a function in C --->they have to be indepedent,can't be in a nested function. Can be placed above or below.
   //You can also declare it at the top, and then define later at the bottom.