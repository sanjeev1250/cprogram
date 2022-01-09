#include<stdio.h>
{

int a;
char b;
};
int main()
{
struct node var;
var.a =10;
var.b ='x';
struct node *ptr &var;
printf("%d %c", ptr->a,ptr ->b);
return 0;
}
