#include <stdio.h>
#include <stdlib.h>

int max(int ar[], int N)
{
    int locOfMax = 0, max, i;
    max = ar[locOfMax];
    for (i = 0; i < N; i++)
    {
        if (max < ar[i])
        {
            max = ar[i];
            locOfMax = i;
        }
    }
    return locOfMax;
}

int main()
{
    int ar[5], N = 5, i, temp, pos;

    //Input in Array.
    for (i = 0; i < N; i++)
    {
        //scanf("%d", &ar[i]);
        ar[i] = rand() % 10 + 1;
    }

    //Print The Array.
    for (i = 0; i < N; i++)
    {
        printf("%d ", ar[i]);
    }

    printf("\n\n");

    //Selection Sort.   
    for (i = 0; i < 5; i++)
    {
        pos = max(ar, N);        
        temp = ar[N - 1];
        ar[N - 1] = ar[pos];
        ar[pos] = temp;
        N = N - 1;
    }

    //Print The Sorted Array.
    for (i = 0; i < 5; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n\n");
    return 0;
}
