# Strings-and-arrays
# Objective: Study and Implement 2D Arrays (Matrices) in C++

## Theory:
**2D Array:** In C++, a 2D array is a data structure that organizes elements in a grid format with rows and columns. It can be visualized as a matrix or table. The elements are stored in contiguous memory locations and follow row-major order—elements of each row are stored sequentially, followed by the next row.

**Matrix:** A 2D array functions as a matrix where each element is indexed by its row and column positions. While C++ does not have built-in functions for matrix operations such as addition, subtraction, multiplication, or inversion, these operations can be implemented manually using loops and nested loops.

## Algorithm (for 8D):
1. **Start**

2. **Include Required Header:**
   Include the <iostream> header for input/output operations.

3. **Declare Variables:**
   Define integer variables rows and cols to store the dimensions of the 2D array.

4. **Get Dimensions from User:**
   - Prompt the user to input the number of rows and columns.
   - Read and store these values in the rows and cols variables.

5. **Allocate Memory Dynamically:**
   - Create a double pointer array to hold the 2D array.
   - Allocate memory for the rows using new int*[rows]`.
   - For each row, allocate memory for the columns using  new int[cols].

6. **Get Elements from User:**
   - Prompt the user to input the elements for the array.
   - Use nested loops to read and store the input in the appropriate array elements.

7. **Print the 2D Array:**
   - Use nested loops to iterate over the rows and columns.
   - Display the array elements in a tabular format.

8. **Stop**
