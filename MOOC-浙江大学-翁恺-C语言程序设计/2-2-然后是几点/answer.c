#include <stdio.h>

int main()
{
	int time;
	int min;
	
	scanf("%d %d", &time, &min);
	
	int result;
	result = (time / 100) * 60 + (time % 100) + min;
	
	printf("%d", (result / 60) * 100 + (result % 60));
	
	return 0;
}
