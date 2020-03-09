#include <stdio.h>
#include <stdlib.h>

//GLobal Declaration.
int a[100], TOP = -1;

//Insert element in Array.
void insert(){
    int i, sizeOfElement;
    printf("Enter the number of element\n");
    scanf("%d", &sizeOfElement);
    for (i = 0; i < sizeOfElement; i++)
    {
        TOP++;
        scanf("%d", &a[TOP]);
    }
}

//Display the Array.
void display(){
    int i;
    for (i = 0; i <= TOP; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");
}

//Push in Array
void push(){
    int pushItem;
    printf("Enter the item you want to push\n");
    scanf("%d", &pushItem);
    TOP++;
    a[TOP] = pushItem;
}

//Pop in Array
void pop(){
    int tempPOP;
    tempPOP = a[TOP];
    TOP--;
}

int main()
{ 
    insert();
    display();
    push();
    display();
    pop();
    display();
    return 0;
}
