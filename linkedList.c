#include <stdio.h>
#include <stdlib.h>

typedef struct mylist{
    int data;
    struct mylist *next;
}node;

//insert in a linkdlist.
void insert(node *s, int data){
    while (s->next != NULL) {
        s = s->next;
    }
    s->next = (node*)malloc(sizeof(node));
    s->next->data = data;
    s->next->next = NULL;
}

//print a linkdlist.
void display(node *s){
    while (s->next != NULL) {
        printf("%d\n", s->next->data);
        s = s->next;
    }
}

//search in a linkdlist.
void search(node *s, int searchItem){
    int count = 0;
    while (s->next != NULL) {
        if (s->next->data == searchItem) {
            count ++;
        }
        s = s->next;
    }
    printf("\n%d Total %d result found\n", searchItem, count);
}

//delete in a linkdlist.
void deleteNode(node *s, int data) {
    while (s->next != NULL) {
        if (s->next->data == data) {
            s->next = s->next->next;
            return;
        }
        s = s->next;
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
