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
<hr>

# Architecture
# Design

## Behavioural Diagram
### High Level
![FlowChart1](https://github.com/nimishpalod/M1_MatrixCalculator_utility/blob/nimish/2_Architecture/FC1.drawio%20(1).png)

### Low Level
![FlowChart2](https://github.com/nimishpalod/M1_MatrixCalculator_utility/blob/nimish/2_Architecture/FC2.drawio.png)

## Structural Diagram
### High Level UML Use Case diagram
![FlowChart3](https://github.com/nimishpalod/M1_MatrixCalculator_utility/blob/nimish/2_Architecture/FC3.drawio.png)

### Low Level UML Use Case diagram
![FlowChart4](https://github.com/nimishpalod/M1_MatrixCalculator_utility/blob/nimish/2_Architecture/FC4.drawio.png)

## Process Design
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

## Best Practice Followed
* Behavioural and Structural diagrams are mentioned for easy understanding.
* Used different symbols for describing different blocks and their functionalities.
* Detailed Explaination of whole process is mentioned.
<hr>

# Test-Plan and Output
## Test Plan
### High Level Test Plan
| ID | Description | Input Values | Expected Output | Actual Output | Type of Test
|----|----|-----|----|----|----|
M_01 | tested addition of two matrix | n,m,matrix1,matrix2 | SUCCESS | SUCCESS | Technical
M_02 | tested subtraction of two matrix | n,m,matrix1,matrix2 | SUCCESS | SUCCESS | Technical
M_03 | tested multiplication of two matrix | m,n,s,matrix1,matrix2 | SUCCESS | SUCCESS | Technical
M_04 | tested transpose of a matrix | m,n,matrix1 | SUCCESS | SUCCESS | Technical
M_05 | tested determinant of a matrix | n,matrix1 | SUCCESS | SUCCESS | Technical
<<<<<<< HEAD

=======
>>>>>>> 2043c2d13dba44af5f0d438366a156002a1d6ac0
### Low Level Test Plan
| ID | HLT ID | Description | Input Values | Expected Output | Actual Output | Type of Test|
|----|--------|-------------|--------------|-----------------|---------------|-------------|
| L_01 | M_01,M_02 | tested on functions which accept two matrices with same dimensions | m,n,matrix1,matrix2 | SUCCESS | SUCCESS | Technical |
| L_02 | M_03 | tested on function which accept two matrices with different dimensions | m,n,matrix1,s,matrix2 | SUCCESS | SUCCESS | Technical |
| L_03 | M_04 | tested on function which accept one non-square matrix | m,n,matrix1 | SUCCESS | SUCCESS | Technical |
| L_04 | M_05 | tested on function which accept one square matrix | n,matrix1 | SUCCESS | SUCCESS | Technical |
<<<<<<< HEAD

=======
>>>>>>> 2043c2d13dba44af5f0d438366a156002a1d6ac0
<hr>

# Output Images

* Intro Display with options of operations 
![Screenshot1](https://github.com/nimishpalod/M1_MatrixCalculator_utility/blob/nimish/6_ImagesAndVideos/Project%20ss%201.jpg)

* Addition of 2 Matrix, Same goes for Subtraction of Matrix
![Screenshot2](https://github.com/nimishpalod/M1_MatrixCalculator_utility/blob/nimish/6_ImagesAndVideos/ss2.jpg)

* Multiplication of 2 matrix
![Screenshot3](https://github.com/nimishpalod/M1_MatrixCalculator_utility/blob/nimish/6_ImagesAndVideos/Screenshot%20(58).jpg)

* Transpose of a matrix
![Screenshot4](https://github.com/nimishpalod/M1_MatrixCalculator_utility/blob/nimish/6_ImagesAndVideos/Screenshot%20(59).jpg)

* Determinant of Matrix
![Screenshot5](https://github.com/nimishpalod/M1_MatrixCalculator_utility/blob/nimish/6_ImagesAndVideos/Screenshot%20(60).jpg)
