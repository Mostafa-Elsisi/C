# Students Marks Sum 
## Easy

You are given an array of integers,marks , denoting the marks scored by students in a class.

- The alternating elements marks0,marks2 ,marks4  and so on denote the marks of boys.
- Similarly,marks1 , marks3,marks5  and so on denote the marks of girls.

The array name,marks, works as a pointer which stores the base address of that array. In other words, marks contains the address where  is stored in the memory.
For example, let marks=[3,2,5] and marks stores 0x7fff9575c05f. Then, 0x7fff9575c05f is the memory address of marks0.

### Function Description

Complete the function, marks_summation in the editor below.

marks_summation has the following parameters:

- int marks[number_of_students]: the marks for each student
- int number_of_students: the size of marks[]
- char gender: either 'g' or 'b'
### Returns

- int: the sum of marks for boys if gender=b, or of marks of girls if gender=g

### Input Format

- The first line contains number_of_students, denoting the number of students in the class, hence the number of elements in marks .
- Each of the number_of_students subsequent lines contains marks.
- The next line contains gender.

### Sample Input 0
```
3
3
2
5
b
```
### Sample Output 0
```
8
```
### Explanation 0

 marks = [3, 2, 5] and gender = b.

So,marks0 + marks2 = 3 + 5 = 8.

### Sample Input 1
```
5
1
2
3
4
5
g
```
### Sample Output 1
```
6
```
### Sample Input 2
```
1
5
g
```
### Sample Output 2
```
0
```