//to display rule based engine
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int salary,cscore;
    int choice,n;

    while (n!=0)
    {
        printf("RILE BASED ENGINE \n");
        printf("Enyter your preffered choice from the below menu \n");
        printf("1. Bank LOan Eligibility \n 2.Electricity Bill Calculation \n 3. Ticket Pricing \n Login Validation \n 5. Weather Adivsory Rule Engine \nPassword Strength \n 7. Simple Discount \n 8. Exit \n") ;
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {
            printf("Enter Salary and Credit Score\t ");
            scanf("%d%d",&salary, &cscore);
            if (salary>=50000 && cscore>=700)
            {
                printf("Eligible for loan approval\n");

            }
            else if(salary>=30000)
            {
                printf("Conditional approval\n");

            }
            else
            {
                printf("Rejected!\n");
            }
            break;
        }
        case 2:
        {
            int total,units;
            printf("Enter units consumed\t");
            scanf("%d",&units);
            if (units<100)
            {
                total=units*2;
                printf("Net payable %d", total);
            } 
            else if(units<300)
            {
                total=units*5;
                printf("Net payable %d",total);

            }
            else
            {
                total=units*8;
                printf("Net payable %d",total);
            }
            break;
        }
        case 3:
        {
            int age;
            printf("Enter age of passenger\t");
            scanf("%d",&age);
            if (age<12)
            {
                printf("Pay Rs.100/-");
            }
            else if(age<=60)
            {
                printf("Pay Rs. 200/-");
            }
            else
            {
                printf("Pay Rs.150/-");
            }
            break;
    
        }
        case 4:
        {
            int attempts;
            printf("Enter number of attemps\t");
            scanf("%d",&attempts);
            if (attempts<3)
            {
                printf("Login approved\n");

            }
            else
            {
                printf("User Rejected\n");
            }
            break;
        }
        case 5:
        {
            int temp;
            printf("Enter the temperature in Celsius \t");
            scanf("%d",&temp);

            if(temp>35)
            {
                printf("Temperature is hot!\n");
            }
            else if(temp<15)
            {
                printf("Temperature is cold!\n");
            }
            else
            {
                printf("Moderate weather\n");

            }
            break;
        }
        case 6:
        {
            int length;
            printf("Enter length of password\t");
            scanf("%d",&length);
            if (length>=8)
            {
                printf("Strong password\n");
            }
            else
            {
                printf("Weak Password! \n");
            }

            break;
        }
        case 7:
        {
            int amount;
            printf("Enter amount \t");
            scanf("%d",&amount);
            if (amount>=5000)
            {
                printf("20 %% discount applied %f", amount*0.8);
            }
            else if(amount>=2000)
            {
                printf(" 10 %% discount applied %f", amount*0.9);
            }
            else
            {printf("no discount! \n");}
            break;
        }
        case 8:
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
