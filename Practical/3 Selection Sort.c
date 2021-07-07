//Selection Sort

#include<stdio.h>

void main()
{
    int a[50],n,i,j,temp,min; 
    printf("Enter the size of the array\n");
    scanf("%d",&n);

    printf("Enter %d elements into the array\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
               min=j;
            }
                
        }
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
    }

    printf("The array elements after applying Selection Sort\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}       
