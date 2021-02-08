#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    int b,c,e;
    scanf("%f",&a);
    a=a*100;
    e=a;
    b=(floor)(a/100);
    //printf("%d ",b);
    c=e%100;
    //printf("%d",c);
    if(b>12)
    {
       if(c<10)
          printf("%d:0%d pm",b-12,c);
       else
          printf("%d:%d pm",b-12,c);
    }
    else if(b==12)
    {
       if(c<10)
          printf("%d:0%d pm",b,c);
       else
          printf("%d:%d pm",b,c);
    }
    else
    {
       if(c<10)
          printf("%d:0%d pm",b,c);
       else
          printf("%d:%d pm",b,c);
    } 
}
