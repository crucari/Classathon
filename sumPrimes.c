#include<cs50.h>
#include<stdio.h>

bool isPrime(int);
bool sumPrimes(int);

int main(void)
   {
       int input =  get_int("Enter number: ");
    //   printf("I got %i\n", input);
       printf("%i\n", sumPrimes(input));
//       if (isPrime(input))
//       {
//           printf("%i is prime\n", input);
//       }
//     else
//     {
//         printf("%i is NOT prime\n", input);
//     }
//   }

bool isPrime(int num)
{
    for(int i = 2; max = num/2; i < max; i++)  //if we do less than, any number will be fine except 4. Number 4 will fail.
    {
        if (num % i == 0)
        {              //find a number that it is divisible by...means it is not prime...return false
         return false;
        }

    return true;
}

int sumPrimes(int number)
{
    int sum = 2;
    for (int i = 3; i <= number; i++)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }
    return sum;
}


// Steps:
// 1) Test if a number is prime --
//   2) How to create a function in C --->they have to be indepedent,can't be in a nested function. Can be placed above or below.
//   You can also declare it at the top, and then define later at the bottom.
