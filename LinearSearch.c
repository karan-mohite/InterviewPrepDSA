//WAP to search a number using linear search and create a user defined function.

LinearSearch(int a[],int r,int search)
{
    int k=0,i;
    for(i=0;i<r;i++)
    {
        if(a[i]==search)
        {
            printf("Number is found at position %d",i+1);
            k++;
            break;
        }
    }
    if(k==0)
    {
        printf("Number is not found..!!");
    }
}
void main()
{
    int i,a[10],search;
    int r;

    printf("Enter a range:");
    scanf("%d",&r);

    printf("Enter %d numbers:",r);
    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter a number that you want to search:");
    scanf("%d",&search);

    LinearSearch(a,r,search);
    getch();
}
