/**
 * @file matrix_cal.h
 * @author Nimish Palod
 * @brief Header file for Matrix Calculator with operations
 *
 */

// #ifndef __CALCULATOR_OPERATIONS_H__
// #define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>

/**
* @brief Adds two matrix of same dimensions and returns the result
* @param[in] matrix1 
* @param[in] matrix2 
* @return Result of matrix1 + matrix2
*/
void addition();

/**
* @brief Subtracts two matrix of same dimensions and returns the result
* @param[in] matrix1 
* @param[in] matrix2 
* @return Result of matrix1 - matrix2
*/
void subtract();

/**
* @brief Multiply the matrix1, matrix2 and returns the result
* @param[in] matrix1 
* @param[in] matrix2 
* @return Result of matrix1 * matrix2
*/
void multiplication();

/**
* @brief Finds the transpose of matrix and returns the result 
* @param[in] matrix1 
* @return Transpose of given matrix
*/
void transpose();

/**
* @brief Finds the determinant of matrix and returns the result 
* @param[in] matrix1 
* @return Result of determinant of given matrix
*/
void determinant();

#endif  /* #define __CALCULATOR_OPERATIONS_H__ */