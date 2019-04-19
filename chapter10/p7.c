#include <stdio.h>
#define MONTHS 12    // number of months in a year
#define YEARS   5    // number of years of data
void copy_row(double *, double *, int);
void copy_ptr(double (*)[MONTHS], double (*)[MONTHS], int);

void print_row(double [], int);
void print_ptr(double (*)[MONTHS], int);

int main(void)
{
    double source[YEARS][MONTHS] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.1}
    };
    double target[YEARS][MONTHS];

    copy_ptr(target, source, YEARS);
    print_ptr(target, YEARS);

    return 0;
}

void copy_ptr(double (*target)[MONTHS], double (*source)[MONTHS], int rows)
{
    for(int i = 0; i < rows; i++)
    {
        copy_row(*(target + i), *(source + i), MONTHS);
    }
}

void copy_row(double *target, double *source, int size)
{
    for(int i = 0; i < size; i++, target++, source++)
    {
        *target = *source;
    }
    return;
}

void print_ptr(double (*ar)[MONTHS], int rows)
{
    for(int i = 0; i < rows; i++)
    {
        print_row(*(ar + i), MONTHS);
    }
    return;
}

void print_row(double ar[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%.1lf ", ar[i]);
    }
    putchar('\n');
    return;
}
