#include <stdio.h>


int main(){
	
	float sales;
	int commision = 9;
	int salary = 200;
	float total_salary;
	
	do {
    	printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);

        if (sales != -1) {
            total_salary = salary + ((commision / 100.0) * sales);
            printf("Salary is: $%.2f\n", total_salary);
        }
	} while (sales != -1);

	printf("Sallary is: $%f", total_salary);
	
	return 0;
}
