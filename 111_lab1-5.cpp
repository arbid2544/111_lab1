#include<stdio.h>
int main()
{
    int n,i=0;
    scanf("%d",&n);
    int N[n];
    for(i;i<n;i++)
    {
        scanf("%d",&N[i]);
    }
    int max=N[0],p=0;
    for(i=1;i<n;i++)
    {
        if(N[i]>max)
        {
            max=N[i];
            p=i;
        }
    }
    printf("%d %d",p+1,max);
}
