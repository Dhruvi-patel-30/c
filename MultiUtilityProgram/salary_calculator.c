#include <stdio.h>

int main(){
    int base_salary, hra,da, ta;
   printf("enter the base salary:");
   scanf("%d", &base_salary);
   printf("enter the hra:");
   scanf("%d", &hra);
   printf("enter the da:");
   scanf("%d", &da);
   printf("enter the ta:");
   scanf("%d", &ta);

   hra = (hra * base_salary) / 100;
   da = (da * base_salary) / 100;   
   ta = (ta * base_salary) / 100;

   int gross_salary = base_salary + hra + da + ta;
   printf("the gross salary is: %d", gross_salary);
}