#include <stdio.h>

int main()
{
  // variable declarations
  int a, b;
  // taking input from the user
  printf("enter a and b");
  // to put the value in the address of the desired variable
  scanf("%d%d", &a, &b);
  // giving perimeter as output
  printf("perimeter of rectangle is:%d", 2 * (a + b));

  return 0;
}

#include <stdio.h>

int main()
{

  int n;
  // taking input from the user
  scanf("%d", &n);
  // giving output as cube of the number entered
  printf("%d", n * n * n);
  return 0;
}