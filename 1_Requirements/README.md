# Description
Matrix Calculator is a software designed in C-language which will allow the users to do major matrix operations like addition, multiplication, transpose, subtraction or finding determinant of a matrix by simply giving some inputs which includes type of operation, matrix elements, number of rows and columns and they will get the required output. Manually matrix operations consumes a lot of time to bring result and that too not guaranteed correct, so this software will help all those users who work with matrices on daily basis by saving their much of efforts and time. This project allows user to enter matrices of any dimensions (possible as per the operations), not limited to the square matrix only.
# Requirements
## High Level Requirements 
| ID | Description |
| ----- | ------ |
| HL_01 | Operation shall be selected by User |
| HL_02 | It shall add two matrices |
| HL_03 | It shall Subtract two matrices |
| HL_04 | It shall Multiply two matrices |
| HL_05 | It shall find the transpose of given matrix |
| HL_06 | It shall calculate determinant value of given matrix |

## Low Level Requirements
| High Level ID | Low Level ID | Description |
|-------|-------|-------------|
| `HL_01` | LL_01 | User should select number from 1 to 5 |
|       | LL_02 | Program should end if any other number is entered |
| `HL_02` , `HL_03` | LL_03 | Number of rows and columns shall be defined by user |
|       | LL_04 | Dimensions of both the matrices shall be same |
|       | LL_05 | Inputs for matrices shall be taken for every index |
|       | LL_06 | Inputs shall be taken for both the matrices separately |
| `HL_04` | LL_07 | Number of rows and columns shall be defined by user |
|       | LL_08 | Number of columns of second matrix should be equal to number of rows of first |
|       | LL_09 | Inputs for matrices shall be taken for every index |
|       | LL_10 | Inputs shall be taken for both the matrices separately |
| `HL_05` | LL_11 | Number of rows and columns shall be defined by user |
|       | LL_12 | Inputs for matrix shall be taken for every index |
| `HL_06` | LL_13 | Matrix should be square matrix only |
|       | LL_14 | User shall define the order of matrix |
|       | LL_15 | Inputs for matrix shall be taken for every index |

# SWOT Analysis
## Strengths
* Finding Sum, Difference, Multiplication of pair of matrix 
* Finding Transpose and Determinant of a single matrix
* Supports for all the possible dimensions as per the operation of matrix
## Weaknesses
* Limited numbers of operations defined
* Except determinant all operations are restricted to intger values only
* Maximum size of matrix is restricted to maximum value of int
## Opportunities
* Solves large matrix problems 
* Saves time and efforts
* Simple and efficient solution
* Wide opportunity in Data Science
## Threats
* Availability of better options in market
* Possible memory leaks
* Only determinant operation supports decimal values
# 5W's and 1H
## What
* Matrix Operations
* Addition, Subtraction, Multiplication of two matrix
* Transpose and Determinant of one matrix
## Who
* Students 
* Employees
* Researchers
## Where
* Students can use to verify their result
* Employees and Researchers can use for quick calculation at work
* Machine Learning Algorithms
## When
* While learning matrix concepts
* Researches
## Why
* Enhancing the work efficiency
* Saving a lot of time and efforts
* Getting accurate result
## How
* Can be executed on windows and linux operating systems

# Best Practice
* Usage of functions to make the code more systematic and understandable.
* Header file is created to use functions wherever required without any confusion or difficulty.
* To avoid computational errors, unit testing is done.