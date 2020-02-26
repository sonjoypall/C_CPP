#include <stdio.h>
int main()
{
    int ar[5], N = 5, i, j, item, temp, com;

    //Array input.
    printf("\nEnter the element of array.\n");
    for(i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);
        //ar[i] = rand() % 15 + 5;
    }

    //Insertion Sorting.
    for(i = 0; i < N; i++)
    {
        item = ar[i + 1], com = i;;
        for(j = 0; j <= i; j++)
        {
            if(ar[com] > item)
            {
                temp = item;
                ar[com + 1] = ar[com];
                ar[com] = temp;
            }
            com -= 1;
        }

    }

    //Print the Sorted Array.
    for(i = 0; i < 5; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n\n");
    return 0;
}
