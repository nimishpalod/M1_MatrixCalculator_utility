# Test Plan
<<<<<<< HEAD
=======

>>>>>>> 2043c2d13dba44af5f0d438366a156002a1d6ac0
## High Level Test Plan
| ID | Description | Input Values | Expected Output | Actual Output | Type of Test
|----|----|-----|----|----|----|
M_01 | tested addition of two matrix | n,m,matrix1,matrix2 | SUCCESS | SUCCESS | Technical
M_02 | tested subtraction of two matrix | n,m,matrix1,matrix2 | SUCCESS | SUCCESS | Technical
M_03 | tested multiplication of two matrix | m,n,s,matrix1,matrix2 | SUCCESS | SUCCESS | Technical
M_04 | tested transpose of a matrix | m,n,matrix1 | SUCCESS | SUCCESS | Technical
M_05 | tested determinant of a matrix | n,matrix1 | SUCCESS | SUCCESS | Technical

## Low Level Test Plan
| ID | HLT ID | Description | Input Values | Expected Output | Actual Output | Type of Test|
|----|--------|-------------|--------------|-----------------|---------------|-------------|
| L_01 | M_01,M_02 | tested on functions which accept two matrices with same dimensions | m,n,matrix1,matrix2 | SUCCESS | SUCCESS | Technical |
| L_02 | M_03 | tested on function which accept two matrices with different dimensions | m,n,matrix1,s,matrix2 | SUCCESS | SUCCESS | Technical |
| L_03 | M_04 | tested on function which accept one non-square matrix | m,n,matrix1 | SUCCESS | SUCCESS | Technical |
| L_04 | M_05 | tested on function which accept one square matrix | n,matrix1 | SUCCESS | SUCCESS | Technical |
