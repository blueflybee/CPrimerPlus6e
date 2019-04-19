#include <stdio.h>
#define MONTHS 5    // number of months in a year
#define YEARS   3    // number of years of data
void copy_arr(int, int, double target[*][*], double source[*][*]);
void print_ptr(double (*)[MONTHS], int);
void print_row(double [], int);

int main(void)
{
    double source[YEARS][MONTHS] =
    {
        {4.3,4.3,4.3,3.0,2.0},
        {8.5,8.2,1.2,1.6,2.4},
        {9.1,8.5,6.7,4.3,2.1}
    };
    double target[YEARS][MONTHS];

    copy_arr(YEARS, MONTHS, target, source);
    print_ptr(target, YEARS);

    return 0;
}

void copy_arr(int rows, int cols, double target[rows][cols], double source[rows][cols])
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
    	{
            *(*(target + i) + j) = *(*(source + i) + j);
    	}
    }
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
