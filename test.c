#include <stdio.h>
int get_integer(void)
{
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	return n; 
}

int is_prime(int n)
{
	int div=0, i;
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			div++;
		}
	}
	return (div==2);
}

int main()
{
	int n, result;
	n=get_integer();
	result=is_prime(n);
	if(result==1)
	{
		printf("%d�� �Ҽ��Դϴ�.\n", n);
	}
	else
	{
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
	}
	return 0;
}
