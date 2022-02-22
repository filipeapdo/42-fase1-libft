#include <ctype.h>
#include "../minunit.h"
#include "../libft_test.h"
#include "../libft.h"

static int	ts0 = 0;
static int	ts1 = 0;
static int	ts2 = 0;
static int	ts3 = 0;
static int	ts4 = 0;
static int	ts5 = 0;

static int	tf0 = 0;
static int	tf1 = 0;
static int	tf2 = 0;

static int	tl_max = 0;
static int	tl_min = 0;

static int	tc0 = 0;
static int	tc1 = 0;
static int	tc2 = 0;
static int	tc3 = 0;

static void	tests_setup(void)
{

	// test to success
	ts0 = ft_tolower('A');
	ts1 = ft_tolower('Z');
	ts2 = ft_tolower('F');
	ts3 = ft_tolower('B');
	ts4 = ft_tolower('Q');
	ts5 = ft_tolower('L');

	// test to fail
	tf0 = ft_tolower('z');
	tf1 = ft_tolower('a');
	tf2 = ft_tolower('|');

	//test limits
	tl_max = ft_tolower(INT_MAX);
	tl_min = ft_tolower(INT_MIN);

	//test corner cases
	tc0 = ft_tolower(-1);
	tc1 = ft_tolower(135);
	tc2 = ft_tolower(255);
	tc3 = ft_tolower(256);
}

MU_TEST(test_success_tolower_0)
{
	mu_check(ts0 == 'a');
}

MU_TEST(test_success_tolower_1)
{
	mu_check(ts1 == 'z');
}

MU_TEST(test_success_tolower_2)
{
	mu_check(ts2 == 'f');
}

MU_TEST(test_success_tolower_3)
{
	mu_check(ts3 == 'b');
}

MU_TEST(test_success_tolower_4)
{
	mu_check(ts4 == 'q');
}

MU_TEST(test_success_tolower_5)
{
	mu_check(ts5 == 'l');
}

MU_TEST(test_fail_tolower_0)
{
	mu_check(tf0 == 'z');
}

MU_TEST(test_fail_tolower_1)
{
	mu_check(tf1 == 'a');
}

MU_TEST(test_fail_tolower_2)
{
	mu_check(tf2 == '|');
}

MU_TEST(test_limits_tolower_max)
{
	mu_check(tl_max == INT_MAX);
}

MU_TEST(test_limits_tolower_min)
{
	mu_check(tl_min == INT_MIN);
}

MU_TEST(test_corner_case_tolower_0)
{
	mu_check(tc0 == -1);
}

MU_TEST(test_corner_case_tolower_1)
{
	mu_check(tc1 == 135);
}

MU_TEST(test_corner_case_tolower_2)
{
	mu_check(tc2 == 255);
}

MU_TEST(test_corner_case_tolower_3)
{
	mu_check(tc3 == 256);
}

MU_TEST_SUITE(suite_tolower)
{
	MU_SUITE_CONFIGURE(&tests_setup, NULL);

	MU_RUN_TEST(test_success_tolower_0);
	MU_RUN_TEST(test_success_tolower_1);
	MU_RUN_TEST(test_success_tolower_2);
	MU_RUN_TEST(test_success_tolower_3);
	MU_RUN_TEST(test_success_tolower_4);
	MU_RUN_TEST(test_success_tolower_5);
	MU_RUN_TEST(test_fail_tolower_0);
	MU_RUN_TEST(test_fail_tolower_1);
	MU_RUN_TEST(test_fail_tolower_2);
	MU_RUN_TEST(test_limits_tolower_max);
	MU_RUN_TEST(test_limits_tolower_min);
	MU_RUN_TEST(test_corner_case_tolower_0);
	MU_RUN_TEST(test_corner_case_tolower_1);
	MU_RUN_TEST(test_corner_case_tolower_2);
	MU_RUN_TEST(test_corner_case_tolower_3);
}

int	test_ft_tolower(void)
{
	MU_RUN_SUITE(suite_tolower);
	MU_REPORT();
	return (MU_EXIT_CODE);
}
