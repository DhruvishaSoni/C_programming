#include<stdio.h>

 main() {
 	
    float base_salary, hra, da, ta, gross_salary;
    
//    float hra, da, ta, Gross_salary;
    
	printf("Enter the base salary: ");
    scanf("%f", &base_salary);
    
    printf("Enter the HRA percentage: ");
    scanf("%f", &hra_percent);
    
    printf("Enter the DA percentage: ");
    scanf("%f", &da_percent);
    
    printf("Enter the TA percentage: ");
    scanf("%f", &ta_percent);
      
      hra = (hra_percent / 100) * base_salary;
	  da = (da_percent / 100) * base_salary;
	  ta = (ta_percent / 100) * base_salary;
    
   gross_salary = base_salary + hra + da + ta;
   
   printf("Gross Salary: Rs. %0.0f",gross_salary);
   

}
