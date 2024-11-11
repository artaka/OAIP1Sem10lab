#include <stdio.h>
void main()
{
	const int size = 3;
	int masA[size], masB[size], masC[size * 2];
	int k = 0, j = 0, i = 0;
	printf("A:\n");
	for (int n = 0; n < size; n++)
		scanf_s("%d", &masA[n]);
	printf("B:\n");
	for (int n = 0; n < size; n++)
		scanf_s("%d", &masB[n]);
	do
	{
		if (masA[k] <= masB[j])
			masC[i++] = masA[k++];
		else
			masC[i++] = masB[j++];
		if (k == size)
			for (; j < size; j++)
				masC[i++] = masB[j];
		if (j == size)
			for (; k < size; k++)
				masC[i++] = masA[k];
	} while (i < size * 2);
	printf("\n");
	for (i = 0; i < size * 2; i++)
		printf("%d ", masC[i]);
	printf("\n");
}

