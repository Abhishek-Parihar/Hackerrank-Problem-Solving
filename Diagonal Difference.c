#include<stdio.h>

int main()
{
    int i,j,n,d=0,ad=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i==j)
            d=d+a[i][j];
            if(i+j==(n-1))
            ad=ad+a[i][j];
        }
    }
    if(d>ad)
    printf("%d",d-ad);
    else if(d<ad)
    printf("%d",ad-d);
    else if(d==ad)
    printf("0");

}
