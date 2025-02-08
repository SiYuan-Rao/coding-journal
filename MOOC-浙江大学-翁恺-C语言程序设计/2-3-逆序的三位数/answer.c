#include <stdio.h>

int main()
{
	int num;
	
	scanf("%d", &num);

	int result;

	result = (num % 10) * 100 + (num / 10 % 10) * 10 + (num / 100);
	
	printf("%d", result);
	return 0;
}
