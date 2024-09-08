# Numerical method

1. [GEM (Gaussian Elimination Method)](https://github.com/Jubayer934/Numerical-Method/blob/main/GEM.c)

   ```text
   Enter number of unknowns: 3
   a[1][1] = 1
   a[1][2] = 1
   a[1][3] = 1
   a[1][4] = 9
   a[2][1] = 2
   a[2][2] = -3
   a[2][3] = 4
   a[2][4] = 13
   a[3][1] = 3
   a[3][2] = 4
   a[3][3] = 5
   a[3][4] = 40

   Solution:
   x[1] = 1.000
   x[2] = 3.000
   x[3] = 5.000

2. [GJEM (Gauss-Jordan Elimination Method)](https://github.com/Jubayer934/Numerical-Method/blob/main/GJEM.c)

   ```text
   Enter number of unknowns: 4
   Enter Coefficients of Augmented Matrix:
   a[1][1]= 1
   a[1][2]= 2
   a[1][3]= 3
   a[1][4]= -1
   a[1][5]= 10
   a[2][1]= 2
   a[2][2]= 3
   a[2][3]= -3
   a[2][4]= -1
   a[2][5]= 1
   a[3][1]= 2
   a[3][2]= -1
   a[3][3]= 2
   a[3][4]= 3
   a[3][5]= 7
   a[4][1]= 3
   a[4][2]= 2
   a[4][3]= -4
   a[4][4]= 3
   a[4][5]= 2

   Solution:
   x[1] = 1.000
   x[2] = 2.000
   x[3] = 2.000
   x[4] = 1.000

3. [Gauss-Seidel Iterative Method](https://github.com/Jubayer934/Numerical-Method/blob/main/GSIM.c)

   ```text
   Enter tolerable error:
   0.0001

   Count   x       y       z
   1       0.8500  -1.0275 1.0109
   2       1.0025  -0.9998 0.9998
   3       1.0000  -1.0000 1.0000
   4       1.0000  -1.0000 1.0000

   Solution: x=1.000, y=-1.000 and z = 1.000

4. [Jacobi Iterative Method](https://github.com/Jubayer934/Numerical-Method/blob/main/Jacobi.c)

   ```text
   Enter tolerable error:
   0.0001

   Count      x     y         z
   1       0.8500  -0.9000    1.2500
   2       1.0200  -0.9650    1.0300
   3       1.0013  -1.0015    1.0033
   4       1.0004  -1.0000    0.9997
   5       1.0000  -1.0001    1.0000

   Solution: x=1.000, y=-1.000 and z = 1.000

5. [Bisection Method](https://github.com/Jubayer934/Numerical-Method/blob/main/BS.c)\

   ```text
   Enter two initial guesses:
   0
   1
   Enter tolerable error:
   0.0001

   Step  x0          x1          x2          f(x2)
   1     0.000000    1.000000    0.500000    0.053222
   2     0.500000    1.000000    0.750000    -0.856061
   3     0.500000    0.750000    0.625000    -0.356691
   4     0.500000    0.625000    0.562500    -0.141294
   5     0.500000    0.562500    0.531250    -0.041512
   6     0.500000    0.531250    0.515625    0.006475
   7     0.515625    0.531250    0.523438    -0.017362
   8     0.515625    0.523438    0.519531    -0.005404
   9     0.515625    0.519531    0.517578    0.000545
   10    0.517578    0.519531    0.518555    -0.002427
   11    0.517578    0.518555    0.518066    -0.000940
   12    0.517578    0.518066    0.517822    -0.000197
   13    0.517578    0.517822    0.517700    0.000174
   14    0.517700    0.517822    0.517761    -0.000012

   Root is: 0.517761

6. [Newton-Raphson Method](https://github.com/Jubayer934/Numerical-Method/blob/main/NRM.c)

   ```text
   Enter initial guess:
   1
   Enter tolerable error:
   0.00001
   Enter maximum iteration:
   10

   Step    x0         f(x0)      x1         (x1)
   1       1.000000   1.459698   0.620016   0.000000
   2       0.620016   0.046179   0.607121   0.046179
   3       0.607121   0.000068   0.607102   0.000068

   Root is: 0.607102
