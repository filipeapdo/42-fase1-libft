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
	ts0 = ft_isdigit('0');
	ts1 = ft_isdigit('9');
	ts2 = ft_isdigit('1');
	ts3 = ft_isdigit('2');
	ts4 = ft_isdigit('5');
	ts5 = ft_isdigit('7');

	// test to fail
	tf0 = ft_isdigit('/');
	tf1 = ft_isdigit(':');
	tf2 = ft_isdigit('~');

	//test limits
	tl_max = ft_isdigit(INT_MAX);
	tl_min = ft_isdigit(INT_MIN);

	//test corner cases
	tc0 = ft_isdigit(-1);
	tc1 = ft_isdigit(135);
	tc2 = ft_isdigit(255);
	tc3 = ft_isdigit(256);
}

MU_TEST(test_success_isdigit_0)
{
	mu_check(ts0 != 0);
}

MU_TEST(test_success_isdigit_1)
{
	mu_check(ts1 != 0);
}

MU_TEST(test_success_isdigit_2)
{
	mu_check(ts2 != 0);
}

MU_TEST(test_success_isdigit_3)
{
	mu_check(ts3 != 0);
}

MU_TEST(test_success_isdigit_4)
{
	mu_check(ts4 != 0);
}

MU_TEST(test_success_isdigit_5)
{
	mu_check(ts5 != 0);
}

MU_TEST(test_fail_isdigit_0)
{
	mu_check(tf0 == 0);
}

MU_TEST(test_fail_isdigit_1)
{
	mu_check(tf1 == 0);
}

MU_TEST(test_fail_isdigit_2)
{
	mu_check(tf2 == 0);
}

MU_TEST(test_limits_isdigit_max)
{
	mu_check(tl_max == 0);
}

MU_TEST(test_limits_isdigit_min)
{
	mu_check(tl_min == 0);
}

MU_TEST(test_corner_case_isdigit_0)
{
	mu_check(tc0 == 0);
}

MU_TEST(test_corner_case_isdigit_1)
{
	mu_check(tc1 == 0);
}

MU_TEST(test_corner_case_isdigit_2)
{
	mu_check(tc2 == 0);
}

MU_TEST(test_corner_case_isdigit_3)
{
	mu_check(tc3 == 0);
}

MU_TEST_SUITE(suite_isdigit)
{
	MU_SUITE_CONFIGURE(&tests_setup, NULL);

	MU_RUN_TEST(test_success_isdigit_0);
	MU_RUN_TEST(test_success_isdigit_1);
	MU_RUN_TEST(test_success_isdigit_2);
	MU_RUN_TEST(test_success_isdigit_3);
	MU_RUN_TEST(test_success_isdigit_4);
	MU_RUN_TEST(test_success_isdigit_5);
	MU_RUN_TEST(test_fail_isdigit_0);
	MU_RUN_TEST(test_fail_isdigit_1);
	MU_RUN_TEST(test_fail_isdigit_2);
	MU_RUN_TEST(test_limits_isdigit_max);
	MU_RUN_TEST(test_limits_isdigit_min);
	MU_RUN_TEST(test_corner_case_isdigit_0);
	MU_RUN_TEST(test_corner_case_isdigit_1);
	MU_RUN_TEST(test_corner_case_isdigit_2);
	MU_RUN_TEST(test_corner_case_isdigit_3);
}

int	test_ft_isdigit(void)
{
	MU_RUN_SUITE(suite_isdigit);
	MU_REPORT();
	return (MU_EXIT_CODE);
}
