#include <stdio.h>

char	check(char c)
{
	c = c - 32;
	printf("%c\n", c);
	return (c);
}

int	main(void)
{
	char	c;

	c = 'h';
	c = check(c);
	printf("%c\n", c);
	return (0);
}
