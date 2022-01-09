#include<stdio.h>
struct std
{
int a;
char b;
};
int main ()
{
struct std var;
var.a =10;
var .b ='x';
printf("%d %c",var.a , var.b);
return 0;
}
