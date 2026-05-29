#include <stdio.h>

int main(){
    int a1, a2, a3;
   printf("enter the a1:");
   scanf("%d", &a1);
   printf("enter the a2:");      
   scanf("%d", &a2);

   int a = a1 + a2;
   a3 = 180 - a;
   printf("the third angle is: %d", a3);
}