/*
Name       : Jubayer-Al-Mahmud
ID         : 2157cse00934
Topic Name : Gauss-Seidel Iterative Method
*/

#include<stdio.h>
#include<math.h>

/* Arrange systems of linear equations to be solved in
   diagonally dominant form and form equation for each unknown.
*/
/* In this example, we are solving:
   3x + 20y - z = -18
   2x - 3y + 20z = 25
   20x + y - 2z = 17
*/
/* Arranged in diagonally dominant form:
   20x + y - 2z = 17
   3x + 20y - z = -18
   2x - 3y + 20z = 25
*/
/* Equations:
   x = (17 - y + 2z) / 20
   y = (-18 - 3x + z) / 20
   z = (25 - 2x + 3y) / 20
*/

/* Defining the functions */
#define f1(x,y,z)  (17 - y + 2 * z) / 20
#define f2(x,y,z)  (-18 - 3 * x + z) / 20
#define f3(x,y,z)  (25 - 2 * x + 3 * y) / 20

/* Main function */
int main() {
    float x0 = 0, y0 = 0, z0 = 0, x1, y1, z1, e1, e2, e3, e;
    int count = 1;

    // Input the tolerable error
    printf("Enter tolerable error:\n");
    scanf("%f", &e);

    // Iterative calculations
    printf("\nCount\tx\ty\tz\n");
    do {
        /* Calculation based on Gauss-Seidel Iteration */
        x1 = f1(x0, y0, z0);
        y1 = f2(x1, y0, z0);  // Use updated x1
        z1 = f3(x1, y1, z0);  // Use updated x1 and y1
        printf("%d\t%0.4f\t%0.4f\t%0.4f\n", count, x1, y1, z1);

        /* Error calculation */
        e1 = fabs(x0 - x1);
        e2 = fabs(y0 - y1);
        e3 = fabs(z0 - z1);

        count++;

        /* Update the values for the next iteration */
        x0 = x1;
        y0 = y1;
        z0 = z1;

    } while (e1 > e || e2 > e || e3 > e);  // Check convergence

    // Output the solution
    printf("\nSolution: x = %0.3f, y = %0.3f, z = %0.3f\n", x1, y1, z1);

    return 0;
}
