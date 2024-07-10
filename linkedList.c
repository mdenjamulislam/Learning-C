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
};

// Insert a new node in linked list in a specific index
void insertNode(int idx, int v) 
{
    struct Node *n = (struct Node*)malloc(sizeof(struct Node));

    n->data = v;
    n->next = NULL;
    if (idx == 0)
    {
        n->next = head;
        head = n;
    }
    else 
    {
        int i = 0;
        struct Node *temp = head;
        while (temp != NULL)
        {
            if (i == idx-1)
            {
                struct Node *newNext=temp->next;
                temp->next=n;
                n->next=newNext;
            }

            temp = temp->next;
            i++;
        }
    }
};

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

    insertNode(2, 70);

    printList();

    return 0;
}