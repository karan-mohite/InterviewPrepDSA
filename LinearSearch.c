void main()
{
    int i,a[100],search;
    int k=0;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter a number that you want to search:");
    scanf("%d",&search);

    for(i=0;i<10;i++)
    {
        if(a[i]==search)
        {
            printf("Number is found..!!");
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
