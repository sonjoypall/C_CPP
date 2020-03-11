#include <stdio.h>
#include <stdlib.h>
int LA[100];

//Insert Element in Array
void insert(int N){
    int i;
    printf("Enter the %d elements in array.\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &LA[i]);
    }
}


void bubbleSort(int J)
{
    int K, TEMP;

    while (J != 0)
    {
        for (K = 1; K < J; K++)
        {
            if (LA[K] < LA[K-1])
            {
                TEMP = LA[K];
                LA[K] = LA[K-1];
                LA[K - 1] = TEMP;
            }
        }
        J--;
    }
}

int main()
{
    int n = 5, i;
    insert(n);
    bubbleSort(n);
    for ( i = 0; i < n; i++)
    {
        printf("%d ", LA[i]);
    }
    printf("\n");
    return 0;
}
