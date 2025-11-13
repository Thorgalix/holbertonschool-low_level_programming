#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }

int main(void)
{
int (*f[3])(int, int) = {add, sub, mul};
int choice, x = 10, y = 5;

printf("0: add | 1: sub | 2: mul\nChoice: ");
scanf("%d", &choice);

printf("Result: %d\n", f[choice](x, y));
return (0);
}
