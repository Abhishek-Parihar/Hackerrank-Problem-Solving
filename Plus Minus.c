#include<stdio.h>

int main()
{
    int i,j,n;
    float pos=0,neg=0,z=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0)
        neg=neg+1;
        if(a[i]>0)
        pos=pos+1;
        if(a[i]==0)
        z=z+1;
    } 
    pos=pos/n;
    neg=neg/n;
    z=z/n;
    printf("%f\n%f\n%f",pos,neg,z);
}
