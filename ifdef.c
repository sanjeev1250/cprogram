#include <stdio.h>
#define A 10
int main()
{
#ifdef A
printf("A is defined ");
#else
printf("A is not defined");

#endif
return 0;

}
