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
	ts0 = ft_isalpha('A');
	ts1 = ft_isalpha('Z');
	ts2 = ft_isalpha('a');
	ts3 = ft_isalpha('z');
	ts4 = ft_isalpha('F');
	ts5 = ft_isalpha('f');

	// test to fail
	tf0 = ft_isalpha('@');
	tf1 = ft_isalpha('^');
	tf2 = ft_isalpha('{');

	//test limits
	tl_max = ft_isalpha(INT_MAX);
	tl_min = ft_isalpha(INT_MIN);

	//test corner cases
	tc0 = ft_isalpha(-1);
	tc1 = ft_isalpha(135);
	tc2 = ft_isalpha(255);
	tc3 = ft_isalpha(256);
}

MU_TEST(test_success_isalpha_0)
{
	mu_check(ts0 != 0);
}

MU_TEST(test_success_isalpha_1)
{
	mu_check(ts1 != 0);
}

MU_TEST(test_success_isalpha_2)
{
	mu_check(ts2 != 0);
}

MU_TEST(test_success_isalpha_3)
{
	mu_check(ts3 != 0);
}

MU_TEST(test_success_isalpha_4)
{
	mu_check(ts4 != 0);
}

MU_TEST(test_success_isalpha_5)
{
	mu_check(ts5 != 0);
}

MU_TEST(test_fail_isalpha_0)
{
	mu_check(tf0 == 0);
}

MU_TEST(test_fail_isalpha_1)
{
	mu_check(tf1 == 0);
}

MU_TEST(test_fail_isalpha_2)
{
	mu_check(tf2 == 0);
}

MU_TEST(test_limits_isalpha_max)
{
	mu_check(tl_max == 0);
}

MU_TEST(test_limits_isalpha_min)
{
	mu_check(tl_min == 0);
}

MU_TEST(test_corner_case_isalpha_0)
{
	mu_check(tc0 == 0);
}

MU_TEST(test_corner_case_isalpha_1)
{
	mu_check(tc1 == 0);
}

MU_TEST(test_corner_case_isalpha_2)
{
	mu_check(tc2 == 0);
}

MU_TEST(test_corner_case_isalpha_3)
{
	mu_check(tc3 == 0);
}

MU_TEST_SUITE(suite_isalpha)
{
	MU_SUITE_CONFIGURE(&tests_setup, NULL);

	MU_RUN_TEST(test_success_isalpha_0);
	MU_RUN_TEST(test_success_isalpha_1);
	MU_RUN_TEST(test_success_isalpha_2);
	MU_RUN_TEST(test_success_isalpha_3);
	MU_RUN_TEST(test_success_isalpha_4);
	MU_RUN_TEST(test_success_isalpha_5);
	MU_RUN_TEST(test_fail_isalpha_0);
	MU_RUN_TEST(test_fail_isalpha_1);
	MU_RUN_TEST(test_fail_isalpha_2);
	MU_RUN_TEST(test_limits_isalpha_max);
	MU_RUN_TEST(test_limits_isalpha_min);
	MU_RUN_TEST(test_corner_case_isalpha_0);
	MU_RUN_TEST(test_corner_case_isalpha_1);
	MU_RUN_TEST(test_corner_case_isalpha_2);
	MU_RUN_TEST(test_corner_case_isalpha_3);
}

int	test_ft_isalpha(void)
{
	MU_RUN_SUITE(suite_isalpha);
	MU_REPORT();
	return (MU_EXIT_CODE);
}
