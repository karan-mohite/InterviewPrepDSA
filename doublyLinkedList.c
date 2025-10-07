struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *start=0;

struct Node *createNode()
{

};
insertStart()
{
    createNode();
}
insertEnd()
{

}
insertMiddle()
{

}
deleteStart()
{

}
deleteEnd()
{

}
deleteMiddle()
{

}
display()
{

}
void main()
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

    while(1)
    {

    printf("\n\nEnter Your Choice:");
    scanf("%d ",&ch);

    switch(ch)
    {
        case 1:
            {
                insertStart();
                break;
            }
        case 2:
            {
                insertEnd();
                break;
            }
        case 3:
            {
                insertMiddle();
                break;
            }
        case 4:
            {
                deleteStart();
                break;
            }
        case 5:
            {
                deleteEnd();
                break;
            }
        case 6:
            {
                deleteMiddle();
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
                break;
            }
        default:
            {
                printf("Wrong Input..!!");
            }
    }
    getch();
    }
}
