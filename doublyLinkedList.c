#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    struct node *prev;
    char data[100];
    struct node *next;
};

struct node *start = 0;

struct node *createNode()
{
    struct node *k1;
    k1 = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter a data:");
    scanf("%s", k1->data);
    k1->next = 0;
    k1->prev = 0;
    return k1;
}

void insertStart()
{
    struct node *h1;
    h1 = createNode();
    if (start == 0)
    {
        start = h1;
    } else
    {
        h1->next = start;
        start->prev = h1;
        start = h1;
    }
}

void insertEnd()
{
    struct node *d1, *y1;
    d1 = createNode();
    if (start == 0)
    {
        start = d1;
    } else
    {
        y1 = start;
        while (y1->next != 0)
        {
            y1 = y1->next;
        }
        y1->next = d1;
        d1->prev = y1;
    }
}

void insertMiddle()
{
    int pos, i = 1;
    struct node *newNode, *temp;

    printf("\nEnter position to insert (after which node): ");
    scanf("%d", &pos);

    if (start == 0)
    {
        printf("List is empty, inserting as first node.\n");
        start = createNode();
        return;
    }

    temp = start;
    while (i < pos && temp->next != 0)
    {
        temp = temp->next;
        i++;
    }

    newNode = createNode();
    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != 0)
        temp->next->prev = newNode;

    temp->next = newNode;

    printf("Node inserted in middle.\n");
}

void deleteStart()
{
    struct node *h1;
    if (start == 0)
    {
        printf("There is no any node to delete..!!");
    } else
    {
        h1 = start;
        start = start->next;
        if (start != 0)
            start->prev = 0;
        h1->next = 0;
        free(h1);
    }
}

void deleteEnd()
{
    struct node *ptr7, *ptr18;
    if (start == 0)
    {
        printf("There is no any node to delete..!!!");
    } else
    {
        if (start->next == 0)
        {
            free(start);
            start = 0;
        } else
        {
            ptr7 = start;
            while (ptr7->next->next != 0)
            {
                ptr7 = ptr7->next;
            }
            ptr18 = ptr7->next;
            ptr18->prev = 0;
            ptr7->next = 0;
            free(ptr18);
        }
    }
}

void deleteMiddle()
{
    int pos, i = 1;
    struct node *temp;

    if (start == 0)
    {
        printf("List is empty.\n");
        return;
    }

    printf("\nEnter position of node to delete: ");
    scanf("%d", &pos);

    temp = start;
    while (i < pos && temp != 0)
    {
        temp = temp->next;
        i++;
    }

    if (temp == 0)
    {
        printf("Invalid position.\n");
        return;
    }

    if (temp->prev != 0)
        temp->prev->next = temp->next;
    if (temp->next != 0)
        temp->next->prev = temp->prev;

    if (temp == start)
        start = temp->next;

    free(temp);
    printf("Node deleted from middle.\n");
}

void display()
{
    struct node *l1;
    l1 = start;
    if (start == 0)
    {
        printf("There is no any node to display..!");
    }
    else
    {
        while (l1 != 0)
        {
            printf("%s ", l1->data);
            l1 = l1->next;
        }
        /*
        while(l1->prev!=0)
        {
            printf("%s ",l1->data);
            l1=l1->prev;
        }
        */
    }
}

int main()
{
    int ch;

    printf("\n1.   Insert Start");
    printf("\n2.   Insert End");
    printf("\n3.   Insert Middle");
    printf("\n4.   Delete Start");
    printf("\n5.   Delete End");
    printf("\n6.   Delete Middle");
    printf("\n7.   Display");
    printf("\n8.   Exit");

    while (1) {
        printf("\n\nEnter Your Choice:");
        scanf("%d", &ch);

        switch (ch) {
            case 1: insertStart(); break;
            case 2: insertEnd(); break;
            case 3: insertMiddle(); break;
            case 4: deleteStart(); break;
            case 5: deleteEnd(); break;
            case 6: deleteMiddle(); break;
            case 7: display(); break;
            case 8: exit(0); break;
            default: printf("Wrong Input..!!");
        }
        getch();
    }
}
