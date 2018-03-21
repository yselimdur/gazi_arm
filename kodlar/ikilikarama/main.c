#include <stdio.h>

int numbers[] = {0, 1, 2, 4};

#define ARRAY_SIZE(_a) sizeof(_a) / sizeof(_a[0])

static int bul(int arr[], int n, int x)
{
	for (int i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

int main(void)
{
	printf("Buldum mu? %d\n", bul(numbers, ARRAY_SIZE(numbers), 4));
	return 0;
}

