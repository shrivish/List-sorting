#include <stdio.h>
int main()
{
    int a[]={50,20,30,40,10},i,j,temp;
    for ( i = 0; i < 4; i++)
    {
        for ( j = (i+1); j < 5; j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    printf("sorted elements are:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}