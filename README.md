# Gauss-Jordan Elimination in C

The **Gauss-Jordan Method** is a numerical technique used to solve systems of linear equations by transforming the augmented matrix into a reduced row-echelon form. This program implements the Gauss-Jordan Elimination method in C to directly find the solutions.

## Features
- Solves systems of linear equations with up to 20 variables.
- Directly computes solutions without requiring back substitution.
- Handles potential errors, such as division by zero during computations.
- User-friendly input format with clear step-by-step outputs.

## How It Works
1. **Augmented Matrix:**  
   The system of equations is represented as an augmented matrix.

2. **Row Operations:**  
   Performs row operations to convert the matrix into reduced row-echelon form.

3. **Solution Extraction:**  
   The final matrix directly reveals the solutions to the equations.

## Technologies Used
- **C Programming Language**

## Installation

### 1. Clone the Repository  
Clone this repository or download the source file.

### 2. Compile the Code  
Use a C compiler (e.g., GCC) to compile the file:
```bash
gcc -o gauss_jordan gauss_jordan.c
```
3. Run the Program
Execute the compiled program:

bash
./gauss_jordan
How to Use
Input the Order of the Matrix:
Specify the number of equations (and variables), n.

Enter the Augmented Matrix:
Provide the coefficients of the equations and the constants row by row.

View the Results:
The program displays the solutions in the form:

plaintext
x1 = value
x2 = value

Example

Input:
```bash
Enter the order of the matrix: 3
Enter the elements of the augmented matrix row-wise:
A[1][1]: 2
A[1][2]: 1
A[1][3]: -1
A[1][4]: 8
A[2][1]: -3
A[2][2]: -1
A[2][3]: 2
A[2][4]: -11
A[3][1]: -2
A[3][2]: 1
A[3][3]: 2
A[3][4]: -3
```
Output:
```bash
The solution is:
x1 = 2.00
x2 = 3.00
x3 = -1.00
```
Limitations
Assumes that a unique solution exists for the system of equations.

May encounter division by zero errors if pivot elements are zero (no pivoting implemented).

Future Improvements
Implement partial or full pivoting to handle cases with zero pivot elements.

Allow dynamic input for different matrix sizes or predefined test cases.

Add detailed error handling and validation for user inputs.

Contributing
Contributions are welcome! If you have ideas to improve this program or encounter bugs, feel free to open an issue or submit a pull request.

Author
Rishita

Contact
Email: rishitatiwari250@gmail.com

GitHub: Rishita-12
