/*
Name       : Jubayer-Al-Mahmud
ID         : 2157cse00934
Topic Name : Newton-Raphson Method
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define f(x) 3 * x - cos(x) - 1
#define g(x) 3 + sin(x)

int main()
{
    float x0, x1, f0, f1, g0, e;
    int step = 1, N;

    // Inputs
    printf("Enter initial guess:\n");
    scanf("%f", &x0);
    printf("Enter tolerable error:\n");
    scanf("%f", &e);
    printf("Enter maximum iterations:\n");
    scanf("%d", &N);

    printf("\nStep\t\tx0\t\tf(x0)\t\tg(x0)\t\tx1\t\tf(x1)\n");

    do
    {
        g0 = g(x0);
        f0 = f(x0);

        if(g0 == 0.0)
        {
            printf("Mathematical Error: Derivative g(x) became zero.\n");
            exit(0);
        }

        x1 = x0 - f0/g0;

        printf("%d\t\t%f\t%f\t%f\t%f\t%f\n", step, x0, f0, g0, x1, f(x1));

        x0 = x1;
        step++;

        if(step > N) {
            printf("Solution did not converge within the given iterations.\n");
            break;
        }
        
    } while(fabs(f(x1)) > e);

    printf("\nRoot is: %f\n", x1);
}

