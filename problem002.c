#include <stdio.h>

int main (void)
{
	int n = 4000000;
	int a = 1, b = 1, c = a+b;

	unsigned long long int result = 0;

	while (c < n)
	{
		result += c;

		a = b + c;
		b = a + c;
		c = a + b;
	}

	printf("Result: %lld\n", result);
}
