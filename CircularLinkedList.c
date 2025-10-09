struct node
{
    int data;
    struct node *next;
};
struct node *start=0;

struct node *createNode()
{
    struct node *k1;
   k1=(struct node*)malloc(sizeof(struct node));
   printf("Enter a data:");
   scanf("%d",&k1->data);
   k1->next=0;
   return k1;
}
void insertS()
{
    struct node *s1;
    s1=createNode();

}
void insertE()
{

}
void insertM()
{

}
void deleteS()
{

}
void deleteE()
{

}
void deleteM()
{

}
void main()
{
    int ch;

    printf("\n1 . Insert from start");
    printf("\n2 . Insert from end");
    printf("\n3 . Insert from middle");
    printf("\n4 . delete from start");
    printf("\n5 . delete from start");
    printf("\n6 . delete from start");
    printf("\n7 . Display");
    printf("\n8 . Exit");
    while(1)
    {
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        swich(ch)
        {
        case 1:
            {
              insertS();
              break;
            }
        case 2:
            {
                insertE();
                break;
            }
        case 3:
            {
                insertM();
                break;
            }
        case 4:
            {
                deleteS();
                break;
            }
        case 5:
            {
                deleteE();
                break;
            }
        case 6:
            {
                deleteM();
                break;
            }
        case 7:
            {
               display();
               break;
            }
        case 8:
            {
                exit(0);
            }
        default:
            {
                printf("Wrong Input..!!");
            }
        }
         getch();
    }
