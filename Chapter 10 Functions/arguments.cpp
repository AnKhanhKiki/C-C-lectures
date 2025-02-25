#include "arguments.h"

int compare_funds(int a, int b)
{
    if(a > b)
    {
        return 1;
    }
    else if(a < b)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int incr_mult(int a, int b)
{
    return (a++) * (++b);
}