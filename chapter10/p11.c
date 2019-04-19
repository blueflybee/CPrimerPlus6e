#include <stdio.h>
#define ROWS	3
#define COLS	5
void double_arr(int (*)[COLS], int);
void print_arr(int (*)[COLS], int);
void print_row(int [], int);

int main(void)
{
    int source[ROWS][COLS] =
    {
        {2, 4, 5, 10, 12},
        {1, 9, 8, 7, 11},
        {90, 18, 86, 6, 16}
    };

    print_arr(source, ROWS);
    double_arr(source, ROWS);
    print_arr(source, ROWS);

    return 0;
}

void double_arr(int (*arr)[COLS], int rows)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < COLS; j++)
    	{
            *(*(arr + i) + j) *= 2;
    	}
    }
}


void print_arr(int (*arr)[COLS], int rows)
{
    for(int i = 0; i < rows; i++)
    {
        print_row(*(arr + i), COLS);
    }
    return;
}

void print_row(int ar[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%6d", ar[i]);
    }
    putchar('\n');
    return;
}
