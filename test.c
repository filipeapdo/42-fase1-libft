#include <stdio.h>
#include <ctype.h>
#include "src/libft.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	printf("\n\nargc = %d\n", argc);
	while (i < argc)
	{
		printf("argv[%d] = %s\n", i, *(argv + i));
		i++;
	}
	printf("\n\n");

	printf("isalnum('A')    ::: %d\n", isalnum('A'));
	printf("ft_isalnum('A') ::: %d\n", ft_isalnum('A'));

	printf("\n\n");

	return (0);
}