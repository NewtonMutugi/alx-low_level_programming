#include <stdio.h>

int is_palindrome(int num)
{
	int rev = 0, temp = num;
	while (temp != 0)
	{
		rev = rev * 10 + temp % 10;
		temp /= 10;
	}
	return rev == num;
}

int main()
{
	int largest_palindrome = 0;
	for (int i = 100; i < 1000; i++)
	{
		for (int j = i; j < 1000; j++)
		{
			int product = i * j;
			if (is_palindrome(product) && product > largest_palindrome)
			{
				largest_palindrome = product;
			}
		}
	}
	FILE *f = fopen("102-result", "w");
	if (f == NULL)
	{
		printf("Error opening file!\n");
		return 1;
	}
	fprintf(f, "%d", largest_palindrome);
	fclose(f);
	return 0;
}
