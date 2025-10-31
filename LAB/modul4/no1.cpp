#include <stdio.h>

int main(){
	
	float sales;
	int commision = 9;
	int sallary = 200;
	float total_sallary;
	
	printf("Enter sales in dollars (-1 to end): ");
	scanf("%f", &sales);
	
	while (sales != -1) {
	    total_sallary = sallary + ((commision / 100.0) * sales);
	    printf("Salary is: $%.2f\n", total_sallary);
	
	    printf("Enter sales in dollars (-1 to end): ");
	    scanf("%f", &sales);
	}
	
	printf("Sallary is: $%f", total_sallary);
	
	return 0;
}
