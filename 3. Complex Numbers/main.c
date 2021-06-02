/**
 * @file main.c
 * @author Anthony Rajiv Francis (anthonyrajiv.francis@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-06-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "unity.h"
#include "complex.h"


/**
 * @brief Set the Up object
 * Required by the unity test framework
 */
void setUp() {}

/**
 * @brief Release the objects that are setup for tests
 * Required by the unity test framework
 */
void tearDown() {}

complex_t first = {1,2};
complex_t second = {3,4};

void test_complex_add()
{
    complex_t temp = add(first, second);
    TEST_ASSERT_EQUAL(4, temp.real);
    TEST_ASSERT_EQUAL(6, temp.imaginary);
}

void test_complex_difference()
{
    complex_t temp = difference(first, second);
    TEST_ASSERT_EQUAL(-2, temp.real);
    TEST_ASSERT_EQUAL(-2, temp.imaginary);
}

void test_complex_product()
{
    complex_t temp = product(first, second);
    TEST_ASSERT_EQUAL(-5, temp.real);
    TEST_ASSERT_EQUAL(10, temp.imaginary);

}

void test_complex_divide()
{
    complex_t temp = divide(first, second);
    TEST_ASSERT_EQUAL(11.0/25, temp.real);
    TEST_ASSERT_EQUAL(2.0/25, temp.imaginary);

}

/**
 * @brief What this function does
 *
 * @return int
 */
int main(void)
{
  /* Initiate the Unity Test Framework */
  UNITY_BEGIN();

  /* Run Test functions */
  RUN_TEST(test_complex_add);
  RUN_TEST(test_complex_difference);
  RUN_TEST(test_complex_product);
  RUN_TEST(test_complex_divide);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
