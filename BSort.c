//Bubble Sort
#include<stdio.h>

void main()
{
    int a[50],n,i,j,temp;
    printf("Enter the size of the array\n");
    scanf("%d",&n);

    printf("Enter %d elements into the array\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("The array elements after applying Bubble Sort\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}