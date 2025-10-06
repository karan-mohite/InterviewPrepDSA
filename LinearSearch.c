//WAP to search a number using linear search and create a user defined function.

void main()
{
    int i,a[10],search;
    int k=0,r;

    printf("Enter a range:");
    scanf("%d",&r);

    printf("Enter %d numbers:",r);
    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter a number that you want to search:");
    scanf("%d",&search);

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
    getch();
}
