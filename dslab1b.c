//largest elements in array//
//ABHAY BANSAL//
//2100320130003
#include<stdio.h>
void main()
{
    int m,i,max,a[10];
    printf("enter array size");
    scanf("%d",&m);
    printf("enter the array elements");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<m;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("the largest number in array is =%d",max);
}