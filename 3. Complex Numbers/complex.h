/**
 * @file complex.h
 * @author Anthony Rajiv Francis (anthonyrajiv.francis@gmail.com)
 * @brief  Implementation of Operations using Complex Numbers
 * @version 0.1
 * @date 2021-06-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _COMPLEX_H_
#define _COMPLEX_H_

#include "stdio.h"
#include "stdlib.h"

/**
 * @brief Creating a structure to store real and imaginary parts of a Complex Number
 * 
 */
typedef struct complex_t
{
    float real;
    float imaginary;
}complex_t;

/**
 * @brief Addition Operation
 * 
 * @param first 
 * @param second 
 * @return complex_t 
 */
complex_t add(complex_t first, complex_t second);

/**
 * @brief Subtraction operation
 * 
 * @param first 
 * @param second 
 * @return complex_t 
 */
complex_t difference(complex_t first, complex_t second);

/**
 * @brief Multiplication Operation
 * 
 * @param first 
 * @param second 
 * @return complex_t 
 */
complex_t product(complex_t first, complex_t second);

/**
 * @brief Division Operation
 * 
 * @param first 
 * @param second 
 * @return complex_t 
 */
complex_t divide(complex_t first, complex_t second);
#endif // _COMPLEX_H_
