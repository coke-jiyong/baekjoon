#include <stdio.h>
#include <stdlib.h>


int main()
{
	int N;
	scanf_s("%d", &N);
	int* P = calloc(N, sizeof(int));
	int tmp;
	int min=0;
	int minResult = 0;
	int sum = 0;
	int result = 0;
	if (P == NULL)	printf("calloc() error!");
	else 
	{
		for (int i = 0; i < N; i++)
		{
			scanf_s("%d", &P[i]);
			min += P[i];
			minResult += min;
		}
		for (int i = 0; i < N - 1; i++)
		{
			for (int j = i + 1; j < N; j++)
			{
				if (P[i] > P[j])
				{
					tmp = P[i];
					P[i] = P[j];
					P[j] = tmp;
				}
			}
		}
		
		for (int i = 0; i < N; i++)
		{
			sum += P[i];
			result += sum;
		}

		printf("%d", result > minResult ? minResult : result);
		
	}
	
	free(P);
	return 0;
}

