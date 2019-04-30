#include <stdio.h>
#define ROWS	3
#define COLS	5
void init_arr(double (*)[COLS]);
void average_row(double (*)[COLS]);
void average(double (*arr)[COLS]);
double max(double (*arr)[COLS]);
void print_arr(double (*)[COLS], int);
void print_row(double [], int);


int main(void)
{
    double source[ROWS][COLS];
    
    printf("please enter 3*5 double array:\n");
    init_arr(source);

    print_arr(source, ROWS);
    average_row(source);
    average(source);

    printf("max: %.2lf\n", max(source));
    return 0;
}

double max(double (*arr)[COLS])
{
    double max = 0.0;
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
    	{
            max = max >= arr[i][j] ? max : arr[i][j];
    	}
        
    }
    return max;
}

void average(double (*arr)[COLS])
{
    double sum = 0.0;
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
    	{
            sum += arr[i][j];
    	}
        
    }
    printf("arerage: %.2lf\n", sum / (ROWS * COLS));
}

void average_row(double (*arr)[COLS])
{
    double sum = 0.0;
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
    	{
            sum += arr[i][j];
    	}
        printf("row %d arerage: %.2lf\n", i, sum / COLS);
        sum = 0;
    }
    
}

void init_arr(double (*arr)[COLS])
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
    	{
            scanf("%lf", &arr[i][j]);
    	}
    }
}


void print_arr(double (*arr)[COLS], int rows)
{
    for(int i = 0; i < rows; i++)
    {
        print_row(*(arr + i), COLS);
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
