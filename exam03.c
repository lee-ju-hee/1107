#include <stdio.h>
long fact(int a)
{
	int i;
	long fact=1;
	for(i=1; i<=a; i++)
	{
		fact*=i;
	}
	return fact;
}
int main()
{
	int num; 
	
	printf("알고 싶은 팩토리얼의 겂은? ");
	scanf("%d", &num);
	
	printf("%d!의 값은 %ld입니다.\n", num, fact(num));
	return 0;
}
