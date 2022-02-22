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
	ts0 = ft_isprint(' ');
	ts1 = ft_isprint('~');
	ts2 = ft_isprint('%');
	ts3 = ft_isprint('0');
	ts4 = ft_isprint('a');
	ts5 = ft_isprint('`');

	// test to fail
	tf0 = ft_isprint(127);
	tf1 = ft_isprint('\0');
	tf2 = ft_isprint('\f');

	//test limits
	tl_max = ft_isprint(INT_MAX);
	tl_min = ft_isprint(INT_MIN);

	//test corner cases
	tc0 = ft_isprint(-1);
	tc1 = ft_isprint(135);
	tc2 = ft_isprint(255);
	tc3 = ft_isprint(256);
}

MU_TEST(test_success_isprint_0)
{
	mu_check(ts0 != 0);
}

MU_TEST(test_success_isprint_1)
{
	mu_check(ts1 != 0);
}

MU_TEST(test_success_isprint_2)
{
	mu_check(ts2 != 0);
}

MU_TEST(test_success_isprint_3)
{
	mu_check(ts3 != 0);
}

MU_TEST(test_success_isprint_4)
{
	mu_check(ts4 != 0);
}

MU_TEST(test_success_isprint_5)
{
	mu_check(ts5 != 0);
}

MU_TEST(test_fail_isprint_0)
{
	mu_check(tf0 == 0);
}

MU_TEST(test_fail_isprint_1)
{
	mu_check(tf1 == 0);
}

MU_TEST(test_fail_isprint_2)
{
	mu_check(tf2 == 0);
}

MU_TEST(test_limits_isprint_max)
{
	mu_check(tl_max == 0);
}

MU_TEST(test_limits_isprint_min)
{
	mu_check(tl_min == 0);
}

MU_TEST(test_corner_case_isprint_0)
{
	mu_check(tc0 == 0);
}

MU_TEST(test_corner_case_isprint_1)
{
	mu_check(tc1 == 0);
}

MU_TEST(test_corner_case_isprint_2)
{
	mu_check(tc2 == 0);
}

MU_TEST(test_corner_case_isprint_3)
{
	mu_check(tc3 == 0);
}

MU_TEST_SUITE(suite_isprint)
{
	MU_SUITE_CONFIGURE(&tests_setup, NULL);

	MU_RUN_TEST(test_success_isprint_0);
	MU_RUN_TEST(test_success_isprint_1);
	MU_RUN_TEST(test_success_isprint_2);
	MU_RUN_TEST(test_success_isprint_3);
	MU_RUN_TEST(test_success_isprint_4);
	MU_RUN_TEST(test_success_isprint_5);
	MU_RUN_TEST(test_fail_isprint_0);
	MU_RUN_TEST(test_fail_isprint_1);
	MU_RUN_TEST(test_fail_isprint_2);
	MU_RUN_TEST(test_limits_isprint_max);
	MU_RUN_TEST(test_limits_isprint_min);
	MU_RUN_TEST(test_corner_case_isprint_0);
	MU_RUN_TEST(test_corner_case_isprint_1);
	MU_RUN_TEST(test_corner_case_isprint_2);
	MU_RUN_TEST(test_corner_case_isprint_3);
}

int	test_ft_isprint(void)
{
	MU_RUN_SUITE(suite_isprint);
	MU_REPORT();
	return (MU_EXIT_CODE);
}
