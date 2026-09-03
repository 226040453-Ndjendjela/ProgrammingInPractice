#include <stdio.h>
int main() {
    //Declare Variable
    double salary=0.00;
    double housingAllowance=0.00;
    double transportAllowance=0.00;
    double tax=0.00;
    double grossSalary=0.00;
    double netWage=0.00;



    //1. Ask user for salary
    printf("Enter salary: ");
    scanf("%lf", &salary);


    //2. Ask user for housing allowance
    printf("Enter Housing Allowance: ");
    scanf("%lf", &housingAllowance);


    //3. Ask user for transport allowance
    printf("Enter Transport Allowance: ");
    scanf("%lf", &transportAllowance);


    //4. Ask user for tax
    printf("Enter Tax: ");
    scanf("%lf", &tax);


    //5. Calculate and output Gross Salary
    grossSalary=salary+housingAllowance+transportAllowance;
    printf("Gross Salaryy: %.2f", grossSalary);


    //6. Calculate and Display Net Salary
    netWage=grossSalary-tax;
    printf("Net Salary: %.2f", netWage);
    return 0;
}