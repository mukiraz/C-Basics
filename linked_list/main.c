#include<stdio.h>
struct Node
    {
        int data;
    struct Node* next;
    };

struct Node* head = NULL;

void insertToHead(int a)
{
    struct Node* t = (struct Node*) malloc(sizeof(struct Node));
    t->data = a;
    t->next = head;
    head = t;
}
void deleteFromHead(){
    if(head != NULL)
    {
        struct Node *t = head;
        head = head->next;
        free(t);
    }
}
void printList(){
    struct Node *t = head;
    while(t != NULL)
    {
        printf("%d " , t->data);
        t = t->next;
    }
}
int main(void)
{
    int i, j;
    for(i=1; i<=10; i++)
    {
        insertToHead(i);
    }
    for(j=1; j<=4; j++)
    {
        deleteFromHead();
    }
    printList();
    getch();
}
