#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int kg;
	scanf_s("%d", &kg);
	for (int i = 0; i <= kg / 3; i++)
	{
		if ((kg - 3 * i) % 5 == 0) 
		{
			printf("%d\n", i + ((kg - 3 * i) / 5));
			exit(0);
		}
	}
	printf("%d", -1);
	return 0;
}

