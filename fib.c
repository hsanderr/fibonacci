#include "fib.h"

// n-ésimo termo da sequência fibonacci por recursão
unsigned int fib(unsigned int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1 || n == 2) {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}