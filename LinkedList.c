struct node
{
    int data;
    struct node *next;
};

struct node *start=0;       //Global declaration
struct node *createNode()
{
    struct node *h1;
    h1=(struct node *)malloc(sizeof(struct node));
    printf("Enter a data:");
    scanf("%d",&h1->data);
    h1->next=0;
    return h1;
}
void insertStart()
{
  struct node *k1;
  k1=createNode();
  if(start==0)
  {
      start=k1;
  }
  else
  {
      k1->next=start;
      start=k1;
  }
}
void insertEnd()
{

}
void insertMiddle()
{

}
void deleteStart()
{
    struct node *y1;
   if(start==0)
   {
       printf("There is no any node to delete..!!");
   }
   else
   {
       y1=start;
       start=start->next;
       y1->next=0;
       free(y1);
       printf("Node Deleted Successfully..!!");
   }
}
void deleteEnd()
{

}
void deleteMiddle()
{

}
void display()
{
      struct node *j1;
      j1=start;

      while(j1!=0)
      {
          printf("%d ",j1->data);
          j1=j1->next;
      }
}

void main()
{

        int ch;

        printf("\n1. Insertion from start");
        printf("\n2. Insertion from end");
        printf("\n3. Insertion from middle");
        printf("\n4. Deletion from start");
        printf("\n5. Deletion from end");
        printf("\n6. Deletion from middle");
        printf("\n7. Display");
        printf("\n8. Exit");

    while(1)
    {
        printf("\n\nEnter Your Choice:");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                insertStart();
                break;

            case 2:
                insertEnd();
                break;

            case 3:
                insertMiddle();
                break;

            case 4:
                deleteStart();
                break;

            case 5:
                deleteEnd();
                break;

            case 6:
                deleteMiddle();
                break;

            case 7:
                display();
                break;

            case 8:
                exit(0);
            default:
                printf("Wrong Input");
        }

        getch();
    }
}
