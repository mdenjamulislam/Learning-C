#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

// Adding first node
void firstNode(int v)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));

    n->data = v;
    n->next = NULL;

    head = n;
    tail = n;
}

// Add new node to next
void addNextNode(int v)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));

    tail->next = n;
    n->data = v;
    n->next = NULL;
    tail = n;
}

// Print Node List
void printList()
{
    struct Node *temp = head;
    int i = 0;

    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
        i++;
    }
    printf("\n");
}

int main()
{
    firstNode(10);
    addNextNode(20);
    addNextNode(30);
    addNextNode(40);

    printList();

    return 0;
}