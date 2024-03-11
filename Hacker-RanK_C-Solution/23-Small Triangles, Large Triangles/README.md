# Small Triangles, Large Triangles
## Meduim

You are given n triangles, specifically, their sides a(i), b(i) and c(i) . Print them in the same style but sorted by their areas from the smallest one to the largest one. It is guaranteed that all the areas are different.

The best way to calculate a area of a triangle with sides ,  and  is Heron's formula:

  - p = (t->a + t->b + t->c) / 2.0
  - s = p * (p - t->a) * (p - t->b) * (p - t->c)
  - r = sqrt(s)

### Input Format

The first line of each test file contains a single integer n . n lines follow with three space-separated integers, a(i),b(i) and c(i).

### Constraints
- 1 <= n <= 100 
- 1 <= a(i),b(i),c(i) <= 70 
- a(i) + b(i) > c(i),a(i) + c(i) > b(i) and b(i) + c(i) > a(i)


### Output Format

Print exactly n lines. On each line print 3 space-separated integers, the a(i), b(i)  and c(i) of the corresponding triangle.

### Sample Input 0
```
3
7 24 25
5 12 13
3 4 5
```
### Sample Output 0
```
3 4 5
5 12 13
7 24 25
```
### Explanation 0

The square of the first triangle is 84. The square of the second triangle is 30. The square of the third triangle is 6. So the sorted order is the reverse one.