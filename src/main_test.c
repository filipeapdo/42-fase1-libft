#include "libft_test.h"
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int	t0;

	printf("\nrunning tests... \n");
	printf("\n[ft_islpha] \n");
	t0 = test_ft_isalpha();
	printf("\n[ft_isdigit] \n");
	t0 = test_ft_isdigit();
	printf("\n[ft_isalnum] \n");
	t0 = test_ft_isalnum();
	printf("\n[ft_isascii] \n");
	t0 = test_ft_isascii();
	printf("\n[ft_isprint] \n");
	t0 = test_ft_isprint();
	printf("\n[ft_toupper] \n");
	t0 = test_ft_toupper();
	printf("\n[ft_tolower] \n");
	t0 = test_ft_tolower();

	return (t0);
}
