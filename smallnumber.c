
#include<stdio.h>
 
int main() {
   int a[7] ={1,2,3,4,5,6,7};
int i;
int small=arr[0];
 
   
   //Consider first element as smallest
   small = a[0];
 
   for (i = 0; i < 7; i++) {
      if (a[i] < small) {
         small = a[i];
      }
   }
 
   // Print out the Result
   printf("\nSmallest Element : %d", small);
 
   return (0);
}


