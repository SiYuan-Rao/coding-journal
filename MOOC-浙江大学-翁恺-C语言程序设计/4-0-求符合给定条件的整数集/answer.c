#include <stdio.h>

int main()
{
	int a;
	int count = 0;
	scanf("%d", &a);

	int i, j, k;
	
	i = a;
	while (i <= a + 3) {
		j = a;
		while (j <= a + 3) {
			k = a;
			while (k <= a + 3) {
				if (i != j) {
					if (i != k) {
						if (j != k) {
							printf("%d%d%d", i, j, k);
							count++;
							
							if (count % 6 == 0) {
								printf("\n");
							} else {
								printf(" ");
							}
						}
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}

	return 0;
}
