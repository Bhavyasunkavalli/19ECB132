#include<stdio.h>
int main()
{
   int x, y, *a, *b, temp;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d", &x, &y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   a = &x;
   b = &y;
 
   temp = *b;
   *b = *a;
   *a = temp;
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   return 0;
}

\*output:
Enter the value of x and y
34
66
Before Swapping
x = 34
y = 66
After Swapping
x = 66
y = 34*/