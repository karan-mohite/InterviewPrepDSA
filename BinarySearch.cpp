#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

        int a[20],l=0,r,Search,m,n;

        cout<<"Enter a Range:";
        cin>>n;
        r=n-1;

        cout<<"Enter "<< n <<" Numbers:";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        cout<<"Enter a number that you want to search:";
        cin>>Search;

        while(l<=r)
        {
            m=(l+r)/2;
            if(a[m]==Search)
            {
                cout<<"Number is found at position"<<" " << m+1;
                break;
            }
            else if(a[m]>Search)
            {
                r=m-1;
            }
            else if(a[m]<Search)
            {
                l=m+1;
            }
        }
        if(l>r)
        {
            cout<<"Number is not found..!!";
        }
        getch();
}
