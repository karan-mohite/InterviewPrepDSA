void main()
{
    int a[10],n;
    int p,s,index,temp,min;

    printf("Enter a Range:");
    scanf("%d",&n);

    printf("Enter %d numbers:",n);
    for(p=0;p<n;p++)
    {
        scanf("%d",&a[p]);
    }

    for(p=0;p<n-1;p++)
    {
        min=a[p];
        index=p;
        for(s=p+1;s<n;s++)
        {
            if(min>a[s])
            {
                min=a[s];
                index=s;
            }
        }
        temp=a[p];
        a[p]=a[index];
        a[index]=temp;
    }
    printf("After Sorting:");
    for(p=0;p<n;p++)
    {
        printf("%d ",a[p]," ");
    }
    getch();
}
