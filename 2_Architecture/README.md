# Design

## Structural Diagram

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


## Use Case Diagram

![Use Case Diagram](https://github.com/nimishpalod/M1_MatrixCalculator_utility/blob/nimish/2_Architecture/MyBlockDiagram2.jpg)




