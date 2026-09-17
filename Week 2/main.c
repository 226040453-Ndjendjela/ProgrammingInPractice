#include <stdio.h>

int main(){
    
    //Declare variable
    double Balance=0;
    double Expense=0;
    double Revenue=0;

    //Welcome Message
    printf("MUNICIPAL BUDGET CALCULATOR\n");

    //USER PROMPT REVENUE
    printf("Please enter the total revenue: ");
    scanf("%lf", &Revenue);

    //USER PROMPT EXPENSE
    printf("Please Enter the total expense: ");
    scanf("%lf", &Expense);

    //Balance Calculation
    Balance=Revenue-Expense;

    //Display Revenue, Expense and Balance
    printf("Revenue: %.2f \n", Revenue);
    printf("Expense: %.2f \n", Expense);
    printf("Balance: %.2f \n", Balance);

    if
     (Expense >= Revenue) THEN
    printf("Loss: %.2f\n");
    else if (Expense <=Revenue) THEN
    printf("Profit: %.2f\n");
   end if
    return 0;
}