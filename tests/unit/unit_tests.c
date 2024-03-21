#include <unity.h>
#include <logic.h>


void setUp(void)
{
}

void tearDown(void)
{
}

void test_logic_add(void)
{
    TEST_ASSERT_EQUAL(5, add(2, 3));
    TEST_ASSERT_NOT_EQUAL(5, add(2, 2));
}

void test_logic_subtract(void)
{
    TEST_ASSERT_EQUAL(5, subtract(10, 5));
    TEST_ASSERT_NOT_EQUAL(5, subtract(3, 2));
}

void test_logic_multiply(void)
{
    TEST_ASSERT_EQUAL(6, multiply(3, 2));
    TEST_ASSERT_NOT_EQUAL(5, multiply(3, 2));
}

void test_logic_divide(void)
{
    TEST_ASSERT_EQUAL(2, divide(10, 5));
    TEST_ASSERT_EQUAL(0, divide(10, 0));
    TEST_ASSERT_NOT_EQUAL(5, divide(6, 2));
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_logic_add);
    RUN_TEST(test_logic_subtract);
    RUN_TEST(test_logic_multiply);
    RUN_TEST(test_logic_divide);
    return UNITY_END();
}
