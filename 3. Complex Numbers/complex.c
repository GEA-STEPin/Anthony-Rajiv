/**
 * @file complex.c
 * @author Anthony Rajiv Francis (anthonyrajiv.francis@gmail.com)
 * @brief  Addition, Subtraction, Multiplication, Division of Complex Numbers
 * @version 0.1
 * @date 2021-06-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include "complex.h"

/**
 * @brief Addition Operation
 * 
 * @param first 
 * @param second 
 * @return complex_t 
 */
complex_t add(complex_t first, complex_t second)
{
    complex_t temp;
    temp.real = (first.real + second.real);
    temp.imaginary = first.imaginary + second.imaginary;
    return temp;
}

/**
 * @brief Subtraction operation
 * 
 * @param first 
 * @param second 
 * @return complex_t 
 */
complex_t difference(complex_t first, complex_t second)
{
    complex_t temp;
    temp.real = first.real - second.real;
    temp.imaginary = first.imaginary - second.imaginary;
    return temp;
}

/**
 * @brief Multiplication Operation
 * 
 * @param first 
 * @param second 
 * @return complex_t 
 */
complex_t product(complex_t first, complex_t second)
{
    complex_t temp;
    temp.real = (first.real * second.real) - (first.imaginary * second.imaginary);
    temp.imaginary = (first.real * second.imaginary) + (second.real * first.imaginary);
    return temp;
}

/**
 * @brief Division Operation
 * 
 * @param first 
 * @param second 
 * @return complex_t 
 */
complex_t divide(complex_t first, complex_t second){
    complex_t temp;
    temp.real = (first.real * second.real + first.imaginary * second.imaginary) / (second.real * second.real + second.imaginary * second.imaginary);
    temp.imaginary = (first.imaginary * second.real - first.real * second.imaginary) / (second.real * second.real + second.imaginary * second.imaginary);
    return temp;
}
