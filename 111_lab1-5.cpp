#include<stdio.h>
int main()
{
	int n,max=0,i,p=0;
	scanf("%d",&n);
	int N[n];
	for(i=0;i<n;i++)
	{
	  scanf("%d",&N[i]);
	}	
	for(i=0;i<n;i++)
	{
	  if(max<N[i]);
	  {
	    max=N[i];
	    p=i+1;
	  }    
    }
	printf("%d %d",p,max);
	return 0;  
}
