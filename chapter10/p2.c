#include <stdio.h>
#define SIZE	5
copy_arr(double *, double *, int);
int main(void)
{
    // initializing rainfall data for 2010 - 2014
    double source = {1.1, 2.2, 3.3, 4.4, 5.5};
    int year, month;
    float subtot, total;

    const float (*pr)[12];
    pr = rain;
    
    printf(" YEAR    RAINFALL  (inches)\n");
    for (year = 0, total = 0; year < YEARS; year++)
    {             // for each year, sum rainfall for each month
        for (month = 0, subtot = 0; month < MONTHS; month++)
            subtot += *(*(pr + year) + month);
        printf("%5d %15.1f\n", 2010 + year, subtot);
        total += subtot; // total for all years
    }

    printf("\nThe yearly average is %.1f inches.\n\n",
           total/YEARS);

    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
    printf(" Nov  Dec\n");
    
    for (month = 0; month < MONTHS; month++)
    {             // for each month, sum rainfall over years
        for (year = 0, subtot =0; year < YEARS; year++)
            subtot += *(*(pr + year) + month);
        printf("%4.1f ", subtot/YEARS);
    }
    printf("\n");
    
    return 0;
}


copy_arr(double *target1, double *source, int size)
{
    for(int i = 0; i < size; i++)
    {
        
    }
}
