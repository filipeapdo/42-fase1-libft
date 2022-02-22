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
	ts0 = ft_toupper('a');
	ts1 = ft_toupper('z');
	ts2 = ft_toupper('f');
	ts3 = ft_toupper('b');
	ts4 = ft_toupper('q');
	ts5 = ft_toupper('l');

	// test to fail
	tf0 = ft_toupper('Z');
	tf1 = ft_toupper('A');
	tf2 = ft_toupper('{');

	//test limits
	tl_max = ft_toupper(INT_MAX);
	tl_min = ft_toupper(INT_MIN);

	//test corner cases
	tc0 = ft_toupper(-1);
	tc1 = ft_toupper(135);
	tc2 = ft_toupper(255);
	tc3 = ft_toupper(256);
}

MU_TEST(test_success_toupper_0)
{
	mu_check(ts0 == 'A');
}

MU_TEST(test_success_toupper_1)
{
	mu_check(ts1 == 'Z');
}

MU_TEST(test_success_toupper_2)
{
	mu_check(ts2 == 'F');
}

MU_TEST(test_success_toupper_3)
{
	mu_check(ts3 == 'B');
}

MU_TEST(test_success_toupper_4)
{
	mu_check(ts4 == 'Q');
}

MU_TEST(test_success_toupper_5)
{
	mu_check(ts5 == 'L');
}

MU_TEST(test_fail_toupper_0)
{
	mu_check(tf0 == 'Z');
}

MU_TEST(test_fail_toupper_1)
{
	mu_check(tf1 == 'A');
}

MU_TEST(test_fail_toupper_2)
{
	mu_check(tf2 == '{');
}

MU_TEST(test_limits_toupper_max)
{
	mu_check(tl_max == INT_MAX);
}

MU_TEST(test_limits_toupper_min)
{
	mu_check(tl_min == INT_MIN);
}

MU_TEST(test_corner_case_toupper_0)
{
	mu_check(tc0 == -1);
}

MU_TEST(test_corner_case_toupper_1)
{
	mu_check(tc1 == 135);
}

MU_TEST(test_corner_case_toupper_2)
{
	mu_check(tc2 == 255);
}

MU_TEST(test_corner_case_toupper_3)
{
	mu_check(tc3 == 256);
}

MU_TEST_SUITE(suite_toupper)
{
	MU_SUITE_CONFIGURE(&tests_setup, NULL);

	MU_RUN_TEST(test_success_toupper_0);
	MU_RUN_TEST(test_success_toupper_1);
	MU_RUN_TEST(test_success_toupper_2);
	MU_RUN_TEST(test_success_toupper_3);
	MU_RUN_TEST(test_success_toupper_4);
	MU_RUN_TEST(test_success_toupper_5);
	MU_RUN_TEST(test_fail_toupper_0);
	MU_RUN_TEST(test_fail_toupper_1);
	MU_RUN_TEST(test_fail_toupper_2);
	MU_RUN_TEST(test_limits_toupper_max);
	MU_RUN_TEST(test_limits_toupper_min);
	MU_RUN_TEST(test_corner_case_toupper_0);
	MU_RUN_TEST(test_corner_case_toupper_1);
	MU_RUN_TEST(test_corner_case_toupper_2);
	MU_RUN_TEST(test_corner_case_toupper_3);
}

int	test_ft_toupper(void)
{
	MU_RUN_SUITE(suite_toupper);
	MU_REPORT();
	return (MU_EXIT_CODE);
}
