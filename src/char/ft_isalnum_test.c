#include <ctype.h>
#include "../minunit.h"
#include "../libft_test.h"
#include "../libft.h"

int	expect_ts0 = 0;
int	result_ts0 = 0;
int	expect_ts1 = 0;
int	result_ts1 = 0;
int	expect_ts2 = 0;
int	result_ts2 = 0;
int	expect_ts3 = 0;
int	result_ts3 = 0;
int	expect_ts4 = 0;
int	result_ts4 = 0;
int	expect_ts5 = 0;
int	result_ts5 = 0;

int	tf0 = 0;
int	tf1 = 0;
int	tf2 = 0;

int	tl_max = 0;
int	tl_min = 0;

int	tc0 = 0;
int	tc1 = 0;
int	tc2 = 0;
int	tc3 = 0;

static void	tests_setup(void)
{

	// test to success
	expect_ts0 = isalnum('A');
	result_ts0 = ft_isalnum('A');

	expect_ts1 = isalnum('Z');
	result_ts1 = ft_isalnum('Z');

	expect_ts2 = isalnum(':');
	result_ts2 = ft_isalnum('a');

	result_ts3 = ft_isalnum('z');
	expect_ts3 = isalnum('z');

	result_ts4 = ft_isalnum('0');
	expect_ts4 = isalnum('0');

	result_ts5 = ft_isalnum('9');
	expect_ts5 = isalnum('9');

	// test to fail
	tf0 = ft_isalnum('/');
	tf1 = ft_isalnum('=');
	tf2 = ft_isalnum('^');

	//test limits
	tl_max = ft_isalnum(INT_MAX);
	tl_min = ft_isalnum(INT_MIN);

	//test corner cases
	tc0 = ft_isalnum(-1);
	tc1 = ft_isalnum(135);
	tc2 = ft_isalnum(255);
	tc3 = ft_isalnum(256);
}

MU_TEST(test_success_isalnum_0)
{
	mu_check(expect_ts0 != 0 && result_ts0 != 0);
}

MU_TEST(test_success_isalnum_1)
{
	mu_check(expect_ts1 != 0 && result_ts1 != 0);
}

MU_TEST(test_success_isalnum_2)
{
	mu_check(expect_ts2 != 0 && result_ts2 != 0);
}

MU_TEST(test_success_isalnum_3)
{
	mu_check(expect_ts3 != 0 && result_ts3 != 0);
}

MU_TEST(test_success_isalnum_4)
{
	mu_check(expect_ts4 != 0 && result_ts4 != 0);
}

MU_TEST(test_success_isalnum_5)
{
	mu_check(expect_ts5 != 0 && result_ts5 != 0);
}

MU_TEST(test_fail_isalnum_0)
{
	mu_check(tf0 == 0);
}

MU_TEST(test_fail_isalnum_1)
{
	mu_check(tf1 == 0);
}

MU_TEST(test_fail_isalnum_2)
{
	mu_check(tf2 == 0);
}

MU_TEST(test_limits_isalnum_max)
{
	mu_check(tl_max == 0);
}

MU_TEST(test_limits_isalnum_min)
{
	mu_check(tl_min == 0);
}

MU_TEST(test_corner_case_isalnum_0)
{
	mu_check(tc0 == 0);
}

MU_TEST(test_corner_case_isalnum_1)
{
	mu_check(tc1 == 0);
}

MU_TEST(test_corner_case_isalnum_2)
{
	mu_check(tc2 == 0);
}

MU_TEST(test_corner_case_isalnum_3)
{
	mu_check(tc3 == 0);
}

MU_TEST_SUITE(suite_isalnum)
{
	MU_SUITE_CONFIGURE(&tests_setup, NULL);

	MU_RUN_TEST(test_success_isalnum_0);
	MU_RUN_TEST(test_success_isalnum_1);
	MU_RUN_TEST(test_success_isalnum_2);
	MU_RUN_TEST(test_success_isalnum_3);
	MU_RUN_TEST(test_success_isalnum_4);
	MU_RUN_TEST(test_success_isalnum_5);
	MU_RUN_TEST(test_fail_isalnum_0);
	MU_RUN_TEST(test_fail_isalnum_1);
	MU_RUN_TEST(test_fail_isalnum_2);
	MU_RUN_TEST(test_limits_isalnum_max);
	MU_RUN_TEST(test_limits_isalnum_min);
	MU_RUN_TEST(test_corner_case_isalnum_0);
	MU_RUN_TEST(test_corner_case_isalnum_1);
	MU_RUN_TEST(test_corner_case_isalnum_2);
	MU_RUN_TEST(test_corner_case_isalnum_3);
}

int	test_ft_isalnum(void)
{
	MU_RUN_SUITE(suite_isalnum);
	MU_REPORT();
	return (MU_EXIT_CODE);
}
