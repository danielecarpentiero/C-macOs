#include <stdio.h>

main()
{
    float fahr, celsius;
    int step = 20;
    int upper = 300;
    int lower = 0;

    fahr = lower;

    for (fahr = lower; fahr <= upper; fahr += step)
    {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f\t%6.1f\n", celsius, fahr);
    }
}
