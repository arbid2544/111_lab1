#include<stdio.h>
int main()
{
	unsigned long long a;
    scanf("%lld",&a);
	printf("%lld %lld",a%3,a%11);
	return 0;
}
