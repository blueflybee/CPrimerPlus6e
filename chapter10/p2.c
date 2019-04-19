#include <stdio.h>
#define SIZE	5
void copy_arr(double [], double [], int);
void copy_ptr(double *, double *, int);
void copy_ptrs(double *, double *, double *);
void print_arr(double [], int);
int main(void)
{
    double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[SIZE];
    double target2[SIZE];
    double target3[SIZE];

    copy_arr(target1, source, SIZE);
    print_arr(target1, SIZE);

    copy_ptr(target2, source, SIZE);
    print_arr(target2, SIZE);

    copy_ptrs(target3, source, source + SIZE);
    print_arr(target3, SIZE);

    return 0;
}


void copy_arr(double target1[], double source[], int size)
{
    for(int i = 0; i < size; i++)
    {
        target1[i] = source[i];
    }
    return;
}

void copy_ptr(double *target2, double *source, int size)
{
    for(int i = 0; i < size; i++, target2++, source++)
    {
        *target2 = *source;
    }
    return;
}

void copy_ptrs(double *target, double *source, double *end)
{
    for(double *pr = source; pr < end; pr++, target++)
    {
        *target = *pr;
    }
    return;
}

void print_arr(double ar[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%.1lf ", ar[i]);
    }
    putchar('\n');
    return;
}
