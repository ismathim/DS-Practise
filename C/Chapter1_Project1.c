/* Write a Program that calculates mileage reimbursement for a salesperson at a rate of $.35 per mile. 
Your program should integract with the user in this manner:

MILEAGE REIMBURSEMENT CALCULATOR
Enter beginning odometer reading => 13505.2
Enter ending odometer reading => 13810.6
You traveled 305.4 miles. At $.35 per mile.
your reimbursement is $106.89 */

#include <stdio.h>
#define cost_per_mile 0.35

int main(){
    double start_val, end_val;
    double diff_val, final_val;

    puts("Enter beginning Odometer reading =>");
    scanf("%lf",&start_val);

    puts("Enter Ending Odometer reading =>");
    scanf("%lf",&end_val);

    diff_val= end_val-start_val;
    final_val= diff_val*cost_per_mile;
    printf("You traveled %f miles. At $ %f per mile.", diff_val, cost_per_mile);
    printf("Your reimbursement is $ %f", final_val);
}

/* Output 

Enter beginning Odometer reading =>
13505.2
Enter Ending Odometer reading =>
13810.6
You traveled 305.400000 miles. At $ 0.350000 per mile.Your reimbursement is $ 106.890000%                                                                                                                                                  
(base) ismathim@Ismaths-MBP C % 

*/
