void BubbleSort(int a[],int n)
{
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("After sorting:\n");
    for(int i=0;i<n;i++)
    {
       printf("%d ",a[i]," ");
    }
}
void main()
{
    int a[10];
    int n;

    printf("Enter a range:");
    scanf("%d",&n);

    printf("Enter %d numbers:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    BubbleSort(a,n);
    getch();
}
