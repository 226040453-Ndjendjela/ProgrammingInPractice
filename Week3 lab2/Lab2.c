#include <stdio.h>
int main(){
    //Declaration of Variable
   char supplierName;
   float price;
   float budget;
   int registered;
   int documentsCompleted;

   //Ask user to enter the supplier's name
   printf("Enter supplier's name: ");
   scanf("%s", supplierName);

   //Ask user to enter the supplier's price
   printf("Enter supplier's price: ");
   scanf("%f", &price);
    
   //Ask user to enter their budget
   printf("Enter your budget: ");
   scanf("%f", &budget);

   //Ask is the supplier is registered 
   //1 = Yes, 0 = No
   printf("Is the supplier registered? (1=Yes, 0=No): ");
   scanf("%d", &registered);

   //Ask if all required documents are completed
   // 1 = Yes, 0 = No
   printf("Are all the required documents completed? (1=Yes, 0=No): ");
   scanf("%d", &documentsCompleted);

   //Check if the supplier meets all the requirements 
   //The supplier must be registered
   //Have complete documents
   //Have a price within the budget
   if (registered == 1 && documentsCompleted == 1 && price <= budget)
   {
    // Display Qualified if all conditions are true
    printf("\nSupplier: %s\n", supplierName);
    printf("Status: Qualified\n");
   }
   else
   {
    //Display disqualified if any condition is false
    printf("\nSupplier: %s\n", supplierName);
    printf("Status: Disqualified\n");
   }

   return 0;
}