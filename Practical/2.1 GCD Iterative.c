//GCD using Iterative

#include<stdio.h>
int GCDI(int m,int n);
void main()
{
    int m, n, res;
    printf("Enter the two positive numbers\n");
    scanf("%d%d",&m,&n);
    res=GCDI(m,n);
    printf("The GCD of %d & %d is %d",m,n,res);
}

int GCDI(int m,int n)
{
    int res;

    while(n!=0)
    {
        res=m%n;
        m=n;
        n=res;
    }
    return m;
}
