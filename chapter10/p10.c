#include <stdio.h>
#define SIZE 5    // number of months in a year

void sum_arr(double *, double *, double *, int);

void print_row(double [], int);

int main(void)
{
    double arr1[SIZE] = {4.3,4.3,4.3,3.0,2.0};
    double arr2[SIZE] = {8.5,8.2,1.2,1.6,2.4};
    double target[SIZE];
    

    sum_arr(arr1, arr2, target, SIZE);
    print_row(target, SIZE);

    return 0;
}
void sum_arr(double *arr1, double *arr2, double *target, int size)
{
   for(int i = 0; i < size; i++)
   {
       *(target + i) = *(arr1 + i) + *(arr2 + i);
   } 
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
