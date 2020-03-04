#include <stdio.h>
#include <stdlib.h>

typedef struct mylist{
    int data;
    struct mylist *next;
}node;

//insert in a linkdlist.
void insert(node *n, int data){
    while (n->next != NULL) {
        n = n->next;
    }
    n->next = (node*)malloc(sizeof(node));
    n->next->data = data;
    n->next->next = NULL;
}

//print a linkdlist.
void display(node *n){
    while (n->next != NULL) {
        printf("%d\n", n->next->data);
        n = n->next;
    }
}

//search in a linkdlist.
void search(node *n, int searchItem){
    int count = 0;
    while (n->next != NULL) {
        if (n->next->data == searchItem) {
            count ++;
        }
        n = n->next;
    }
    printf("\n%d Total %d result found\n", searchItem, count);
}

//delete in a linkdlist.
void deleteNode(node *n, int data) {
    while (n->next != NULL) {
        if (n->next->data == data) {
            n->next = n->next->next;
            return;
        }
        n = n->next;
    }
}

int main()
{
    node *a = (node*)malloc(sizeof(node));
    a->next = NULL;

    insert(a, 9);
    insert(a, 5);
    insert(a, 2);
    insert(a, 1);
    display(a);
    search(a, 0);
    deleteNode(a, 5);
    printf("\n");
    display(a);
    printf("\n");
    return 0;
}
