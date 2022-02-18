#include "../libft_test.h"
#include "../libft.h"
#include "../minunit.h"
#include <limits.h>

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
	ts0 = ft_isascii('\0');
	ts1 = ft_isascii('!');
	ts2 = ft_isascii('a');
	ts3 = ft_isascii('0');
	ts4 = ft_isascii('\\');
	ts5 = ft_isascii(127);

	// test to fail
	tf0 = ft_isascii(128);
	tf1 = ft_isascii(254);
	tf2 = ft_isascii(-1);

	//test limits
	tl_max = ft_isascii(INT_MAX);
	tl_min = ft_isascii(INT_MIN);

	//test corner cases
	tc0 = ft_isascii(-1);
	tc1 = ft_isascii(135);
	tc2 = ft_isascii(255);
	tc3 = ft_isascii(256);
}

MU_TEST(test_success_isascii_0)
{
	mu_check(ts0 != 0);
}

MU_TEST(test_success_isascii_1)
{
	mu_check(ts1 != 0);
}

MU_TEST(test_success_isascii_2)
{
	mu_check(ts2 != 0);
}

MU_TEST(test_success_isascii_3)
{
	mu_check(ts3 != 0);
}

MU_TEST(test_success_isascii_4)
{
	mu_check(ts4 != 0);
}

MU_TEST(test_success_isascii_5)
{
	mu_check(ts5 != 0);
}

MU_TEST(test_fail_isascii_0)
{
	mu_check(tf0 == 0);
}

MU_TEST(test_fail_isascii_1)
{
	mu_check(tf1 == 0);
}

MU_TEST(test_fail_isascii_2)
{
	mu_check(tf2 == 0);
}

MU_TEST(test_limits_isascii_max)
{
	mu_check(tl_max == 0);
}

MU_TEST(test_limits_isascii_min)
{
	mu_check(tl_min == 0);
}

MU_TEST(test_corner_case_isascii_0)
{
	mu_check(tc0 == 0);
}

MU_TEST(test_corner_case_isascii_1)
{
	mu_check(tc1 == 0);
}

MU_TEST(test_corner_case_isascii_2)
{
	mu_check(tc2 == 0);
}

MU_TEST(test_corner_case_isascii_3)
{
	mu_check(tc3 == 0);
}

MU_TEST_SUITE(suite_isascii)
{
	MU_SUITE_CONFIGURE(&tests_setup, NULL);

	MU_RUN_TEST(test_success_isascii_0);
	MU_RUN_TEST(test_success_isascii_1);
	MU_RUN_TEST(test_success_isascii_2);
	MU_RUN_TEST(test_success_isascii_3);
	MU_RUN_TEST(test_success_isascii_4);
	MU_RUN_TEST(test_success_isascii_5);
	MU_RUN_TEST(test_fail_isascii_0);
	MU_RUN_TEST(test_fail_isascii_1);
	MU_RUN_TEST(test_fail_isascii_2);
	MU_RUN_TEST(test_limits_isascii_max);
	MU_RUN_TEST(test_limits_isascii_min);
	MU_RUN_TEST(test_corner_case_isascii_0);
	MU_RUN_TEST(test_corner_case_isascii_1);
	MU_RUN_TEST(test_corner_case_isascii_2);
	MU_RUN_TEST(test_corner_case_isascii_3);
}

int	test_ft_isascii(void)
{
	MU_RUN_SUITE(suite_isascii);
	MU_REPORT();
	return (MU_EXIT_CODE);
}
