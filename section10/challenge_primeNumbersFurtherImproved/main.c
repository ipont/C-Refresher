

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>

/**
 * === Prime Numbers Further Improved ===
 *
 * Prime number: integer number greater than 1, only divisible by 1 and itself
 *
 * Goals:
 *  - Find all prime numbers below a given upper limit given by the user
 *  - Check that 2 < upper limit <= 1 million
 *  - Store prime numbers in an array of 100k integers
 *  - Optimize the program by using stored prime numbers
 *  - Compare the execution time of the simple version with the optimized one
 *  - Implement printing of primes found separately from the algorithm
 *  - Print up to 50 prime numbers found
 *
 * Simple version:
 *  - given an input number, n, check whether it is evenly divisible by ANY NUMBER
 *    between 2 and sqrt(n) (i.e. that the division leaves no remainder)
 *
 * Optimized version:
 *  - given an input number, n, check whether it is evenly divisible by ANY PRIME NUMBER
 *    between 2 and sqrt(n) (i.e. that the division leaves no remainder)
 *
 */

bool simplePrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0 && i != n)
        {
            return false;
        }
    }

    return true;
}

bool optmimusPrime(int n, int *primes, int *len)
{
    if (n % 2 == 0)
    {
        return false;
    }
    for (int i = 0; i < *len; i++)
    {
        if (n % *(primes + i) == 0)
        {
            return false;
        }
        if (*(primes + i) >= sqrt(n)){
            return true;
        }
    }
    return true;
}

void printPrimes(int *primes, int *len)
{
    for (int i = 1; i <= *len && i < 50; i++)
    {
        printf("%6d", *(primes + i-1));
        if (i % 10 == 0)
        {
            printf("\n");
        }
    }
}

int main()
{
    int limit;
    int primes[100000];
    int len = 0;
    clock_t start_clk, end_clk;

    printf("Enter upper limit:\n");
    scanf("%d", &limit);
    if (2 >= limit || limit >= 1000000)
    {
        printf("Invalid limit given\n");
        return 1;
    }

    start_clk = clock();
    for (int i = 3; i <= limit; i++)
    {
        if (simplePrime(i))
        {
            primes[len] = i;
            len++;
        }
    }
    end_clk = clock();
    printPrimes(primes, &len);
    printf("\nSimple run time (seconds): %.1f\n", (end_clk - start_clk) / (double)CLOCKS_PER_SEC);

    len = 0;
    start_clk = clock();
    // Optimized version
    for (int i = 3; i <= limit; i++)
    {
        if (optmimusPrime(i, primes, &len))
        {
            primes[len] = i;
            len++;
        }
    }
    end_clk = clock();
    printPrimes(primes, &len);
    printf("\nOptimized run time (seconds): %.1f\n", (end_clk - start_clk) / (double)CLOCKS_PER_SEC);

    return EXIT_SUCCESS;
}
