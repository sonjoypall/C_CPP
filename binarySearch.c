#include <stdio.h>
#include <stdlib.h>
void binary_search(int ar[],int n, int item)
{
    int beg = 0, end = n - 1;

    while (beg <= end)
    {
        int mid = (beg + end)/2;
        if (ar[mid] == item)
        {
            printf("The number: %d is found in the loc: %d\n",ar[mid], mid + 1);
            break;
        }
        if (ar[mid] < item)
        {
            beg = mid + 1;
            
        }
        else
        {
            end = mid - 1;
        }
    }
}

int main()
{
    int n = 10, searchItem, i;
    int ar[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    printf("Please enter the number you want to search.\n");
    scanf("%d", &searchItem);
    binary_search(ar, n, searchItem);
    printf("\n");
    return 0;
}
