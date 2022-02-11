# Description
Matrix Calculator is a software designed in C-language which will allow the users to do major matrix operations like addition, multiplication, transpose, subtraction or finding determinant of a matrix by simply giving some inputs which includes type of operation, matrix elements, number of rows and columns and they will get the required output. Manually matrix operations consumes a lot of time to bring result and that too not guaranteed correct, so this software will help all those users who work with matrices on daily basis by saving their much of efforts and time. This project allows user to enter matrices of any dimensions (possible as per the operations), not limited to the square matrix only.
# Requirements
## High Level Requirements 
| ID | Description |
| ----- | ------ |
| HL_01 | Addition of two matrix |
| HL_02 | Subtraction of two matrix |
| HL_03 | Multiplication of two matrix |
| HL_04 |Transpose of matrix |
| HL_05 | Determinant of matrix |
## Low Level Requirements
| ID | Description | Link |
|-----|----------|-------|
| LL_01 | Selecting the operation | |
| LL_02 | Number of Rows | HL_01,HL_02,HL03,HL_04 |
| LL_03 | Number of Columns | HL_01,HL_02,HL_03,HL_04 |
| LL_04 | Define the order of matrix | HL_05 |
| LL_05 | Both the matrices should be of same dimensions | HL_01,HL_02 |
| LL_06 | Number of columns of first matrix should be equal to number of rows of second | HL_03 |
| LL_07 | Elements of matrices for each index number | HL_01,HL_02,HL03,HL_04,HL_05 |
| LL_08 | Matrix should be square matrix only | HL_05 |
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
* Can be executed on windows operating system

# Architecture
## Design
### Structural Diagram

![Flow Chart](https://github.com/nimishpalod/M1_MatrixCalculator_utility/blob/nimish/2_Architecture/MyBlockDiagram1.jpg)
 
1. At First user needs to give preferance for operation from the list displayed on screen in numbers ranging from 1 to 7.
2. From that if the operations selected is `Addition or Subtraction` :
    * User needs to enter the number of rows and columns as to define the dimensions of matrix which will be same for both the matrix.
    * After that system will ask for elements of both the matrix for every index.
    * At last according to the inputs given the system will provide the output as resultant matrix.
3. `Multiplication` : 
    * User needs to enter the number of rows and columns for both the matrices.
    * If number of rows of matrix2 and columns of matrix1 differs, It will exit the code with an statement Invalid.
    * Else it will ask for inputs for elemnts of matrix1 and matrix2.
    * At last according to the inputs given the system will provide the output as resultant matrix.
4. `Transpose` : 
    * User needs to enter the number of rows and columns of matrix.
    * Then needs to enter the elements of matrix at every index.
    * According to the inputs given the system will provide the output as resultant matrix.
5. `Determinant` :
    * User needs to give the size of matrix. Since this will always be the square matrix, only one input will be asked.
    * Then needs to enter the elements of matrix at every index. These inputs can be of integer or decimal type.
    * The output will be generated and displayed accordingly.


### Use Case Diagram

![Use Case Diagram](https://github.com/nimishpalod/M1_MatrixCalculator_utility/blob/nimish/2_Architecture/MyBlockDiagram2.jpg)

# Test-Plan and Output
## Test Plan
| ID | Description | Input Values | Expected Output | Actual Output | Type of Test
|----|----|-----|----|----|----|
M_01 | tested addition of two matrix | n,m,matrix1,matrix2 | SUCCESS | SUCCESS | Technical
M_02 | tested subtraction of two matrix | n,m,matrix1,matrix2 | SUCCESS | SUCCESS | Technical
M_03 | tested multiplication of two matrix | m,n,s,matrix1,matrix2 | SUCCESS | SUCCESS | Technical
M_04 | tested transpose of a matrix | m,n,matrix1 | SUCCESS | SUCCESS | Technical
M_05 | tested determinant of a matrix | n,matrix1 | SUCCESS | SUCCESS | Technical


