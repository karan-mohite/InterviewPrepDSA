#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node
{
    int data;
    struct node *next;
};

struct node *start = 0;

// Create a new node
struct node *createNode()
{
    struct node *k1;
    k1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter a data: ");
    scanf("%d", &k1->data);
    k1->next = 0;
    return k1;
}

// ✅ Original insertS (do not change)
void insertS()
{
    struct node *s1, *p1;
    s1 = createNode();

    if (start == 0)
    {
        start = s1;
    }
    else
    {
        s1->next = start;
        p1 = start;
        if (p1->next == 0)
        {
            p1->next = s1;
            start = s1;
        }
        else
        {
            while (p1->next != start)
            {
                p1 = p1->next;
            }
            p1->next = s1;
            start = s1;
        }
    }
}

// ✅ Simplified insertE
void insertE()
{
    struct node *newNode = createNode();
    if (start == 0)
    {
        start = newNode;
        return;
    }

    struct node *temp = start;

    if (temp->next == 0)
    {
        temp->next = newNode;
        newNode->next = start;
    }
    else
    {
        while (temp->next != start)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = start;
    }
}

// ✅ Simplified insertM (Insert after a given value)
void insertM()
{
    if (start == 0)
    {
        printf("List is empty, using insertS instead.\n");
        insertS();
        return;
    }

    int value;
    printf("Enter the data after which to insert: ");
    scanf("%d", &value);

    struct node *temp = start;
    struct node *newNode = createNode();

    // Single node special case
    if (temp->next == 0)
        {
        if (temp->data == value)
        {
            temp->next = newNode;
            newNode->next = start;
        }
        else
        {
            printf("Value not found.\n");
            free(newNode);
        }
        return;
    }

    do
    {
        if (temp->data == value)
        {
            newNode->next = temp->next;
            temp->next = newNode;
            return;
        }
        temp = temp->next;
    } while (temp != start);

    printf("Value not found.\n");
    free(newNode);
}

void deleteS()
{
    struct node *g1;
    if (start == 0)
    {
        printf("There is no any node to delete..!!\n");
    }
    else
    {
        g1 = start;
        while (g1->next != start)
        {
            g1 = g1->next;
        }
        g1->next = start->next;
        g1 = start;
        start = start->next;
        g1->next = 0;
        free(g1);
    }
}

 void deleteE()
 {
    if (start == 0)
    {
        printf("No node to delete..!!\n");
        return;
    }

    struct node *temp = start;

    // Single node
    if (temp->next == 0 || temp->next == start)
    {
        free(start);
        start = 0;
        printf("Last node deleted.\n");
        return;
    }

    struct node *prev = NULL;

    while (temp->next != start)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = start;
    free(temp);
    printf("Last node deleted.\n");
}

// ✅ Simplified deleteM (delete by value)
void deleteM()
{
    if (start == 0)
    {
        printf("List is empty.\n");
        return;
    }

    int val;
    printf("Enter value to delete: ");
    scanf("%d", &val);

    // Single node
    if ((start->next == 0 || start->next == start) && start->data == val)
    {
        free(start);
        start = 0;
        printf("Node deleted.\n");
        return;
    }

    // Delete from start
    if (start->data == val)
    {
        deleteS();
        return;
    }

    struct node *temp = start, *prev = NULL;

    do
    {
        prev = temp;
        temp = temp->next;

        if (temp->data == val)
        {
            prev->next = temp->next;
            free(temp);
            printf("Node deleted.\n");
            return;
        }
    } while (temp != start);

    printf("Value not found.\n");
}

// ✅ Original display (do not change)
void display()
{
    struct node *t1;
    t1 = start;
    if (start == 0)
    {
        printf("There is no any node to display..!!\n");
    }
    else
    {
        do
        {
            printf("%d ", t1->data);
            t1 = t1->next;
        } while (t1 != start);
        printf("\n");
    }
}

// ✅ main function
int main()
{
    int ch;

    printf("\n1. Insert from start");
    printf("\n2. Insert from end");
    printf("\n3. Insert from middle");
    printf("\n4. Delete from start");
    printf("\n5. Delete from end");
    printf("\n6. Delete from middle");
    printf("\n7. Display");
    printf("\n8. Exit");

    while (1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1: insertS(); break;
            case 2: insertE(); break;
            case 3: insertM(); break;
            case 4: deleteS(); break;
            case 5: deleteE(); break;
            case 6: deleteM(); break;
            case 7: display(); break;
            case 8: exit(0);
            default: printf("Wrong Input..!!\n");
        }
    }

    return 0;
}
