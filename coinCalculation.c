#include <stdio.h>

#include "coinCalculation.h"


// input currency
int InputCurrency (){
	
	int currency;
	
	printf("1. AU$\n2. US$\n3. Euro\nChoose a currency by entering its corresponding number: ");
	scanf("%d", &currency);
	
	while ((currency < 1) || (currency > 3)){
		printf("Error, enter a valid option: ");
		scanf("%d", &currency);
				    }
	
	return currency;
					}



//input amount of money
int InputMoney (int a, int max, int min){
	
	int amount_money;
	
	
	if (a == 1){
		printf("Enter amount of money between and including 1 and 95 cents (must be multiple of 5): ");
		scanf("%d", &amount_money);
		while ((amount_money < min) || (amount_money > max) || (amount_money % 5 != 0)){
			printf("Invalid input, amount must be between 1 and 95 and a multiple of 5: ");
			scanf("%d", &amount_money);																		 }
		
			   }
		
		else{
			printf("Enter amount of money between and including 1 and 95 cents: ");
			
			while ((amount_money < min) || (amount_money > max)){
				printf("Invalid input, amount must be between 1 and 95: ");
				scanf("%d", &amount_money);
															  }
			}	
			
	return amount_money;
										}



void SetCoinValues (int currency, int currency1_coin1, int currency1_coin2, int currency1_coin3, int currency1_coin4, 
								  int currency2_coin1, int currency2_coin2, int currency2_coin3, int currency2_coin4, 
								  int currency3_coin1, int currency3_coin2, int currency3_coin3, int currency3_coin4,
					int* coin1, int* coin2, int* coin3, int* coin4){
	switch (currency){
		case 1:
		*coin1 = currency1_coin1;
		*coin2 = currency1_coin2;
		*coin3 = currency1_coin3;
		*coin4 = currency1_coin4;
		break;
		case 2:
		*coin1 = currency2_coin1;
		*coin2 = currency2_coin2;
		*coin3 = currency2_coin3;
		*coin4 = currency2_coin4;
		break;
		case 3:
		*coin1 = currency3_coin1;
		*coin2 = currency3_coin2;
		*coin3 = currency3_coin3;
		*coin4 = currency3_coin4;
					 }
						
	return;
																	}

void ReturnCoins (int amount_money, int coin1, int coin2, int coin3, int coin4,
					int* num_coin1, int* num_coin2, int* num_coin3, int* num_coin4){
		
	*num_coin1 = amount_money / coin1;
	*num_coin2 = (amount_money % coin1) / coin2;
	*num_coin3= (amount_money % coin1 %coin2) / coin3;
	*num_coin4 = (amount_money % coin1 % coin2 % coin3) / coin4;
	
return;
}


void PrintResult (int coin1, int coin2, int coin3, int coin4,
					int* num_coin1, int* num_coin2, int* num_coin3, int* num_coin4){
						
	printf("%d cents: %d\n%d cents: %d\n%d cents: %d\n%d cents: %d\n\n", coin1, *num_coin1, coin2, *num_coin2, coin3, *num_coin3, coin4, *num_coin4);
	
return;
																				   }



int AskContinue (){
	
	int status;
	
	printf("Do you wish to continue?\nEnter 1 for yes or 2 for no: ");
	scanf("%d", &status);
	
	while ((status != 1) && (status != 2)){
			printf("Error, enter a valid number: ");
			scanf("%d", &status);
										  }
	
return status;
	}

























					 
				 
//checks if input of AU$ is valid 
int MoneyAU$ (){
	
	int money, result;
	
	printf("Enter amount of money between and including 1 and 95 cents (must be multiple of 5): ");
	scanf("%d", &money);
	
	while ((money < 1) || (money > 95)){
		printf("Error, enter valid number: ");
		scanf("%d", &money);
									   }
		result = MultipleOf5 (money);
		
		while (result != 0){
			printf("Error, enter valid number: ");
			scanf("%d", &money);
			result = MultipleOf5 (money);
						   }
		
	return money;
			   }
			   
			     
	
//calculates multiple of 5 for input of AU$	
int MultipleOf5 (int a){
	
	int result;
	
	result = a % 5;
	
	return result;
					   }
	
	
	
//checks if input of US$ or Euro is valid 	
int MoneyUS$_Euro (){
	
	int money;
	
	printf("Enter amount of money between and including 1 and 95 cents: ");
	scanf("%d", &money);
	
	while ((1 > money) || (money > 95)){
		printf("Error, enter valid number: ");
		scanf("%d", &money);
						  }
	return money;
				    }
					


//Chooses currency and calculates coins by calling other functions based on user input 
void ChooseCalculation (int a, int b){
	
	switch(a){
		case 1:
		ComputeCoinAU$ (b);
		break;
		case 2:
		ComputeCoinUS$ (b);
		break;
		case 3:
		ComputeCoinEuro (b);
		break;
			 }
	return;
								    }
	
	
	
//calculates the coins for AU$	
void ComputeCoinAU$ (int a){
	
	int fifty, twenty, ten, five;
	
	fifty = a / 50;
	twenty = (a % 50) / 20;
	ten = (a % 50 %20) / 10;
	five = (a % 50 % 20 % 10) / 5;
	DisplayCoinAU$ (fifty, twenty, ten, five);
	
	return;
						   }
	

	
//Displays the coins for AU$						   
void DisplayCoinAU$ (int a, int b, int c, int d){
	
	printf("Fifty: %d\n", a);
	printf("Twenty: %d\n", b);
	printf("Ten: %d\n", c);
	printf("Five: %d\n", d);
	
	return;
												}
												
	

//Calculates the coins for US$	
void ComputeCoinUS$ (int a){
	
	int fifty, twenty_five, ten, one;
	
	fifty = a / 50;
	twenty_five = (a % 50) / 25;
	ten = (a % 50 % 25) / 10;
	one = (a % 50 % 25 % 10) / 1;
	DisplayCoinUS$ (fifty, twenty_five, ten, one);
	
	return;
						   }
		

		
//Displays the coins for US$						   
void DisplayCoinUS$ (int a, int b, int c, int d){
	
	printf("Fifty: %d\n", a);
	printf("Twenty-five: %d\n", b);
	printf("Ten: %d\n", c);
	printf("One: %d\n", d);
	
	return;
												}
	
	
//Calculates the coins for Euro
void ComputeCoinEuro (int a){
	
	int twenty, ten, five, one;
	
	twenty = a / 20;
	ten = (a % 20) / 10;
	five = (a % 20 % 10) / 5;
	one = (a % 20 % 10 % 5) / 1;
	DisplayCoinEuro (twenty, ten, five, one);
	
	return;
						   }
						   
	
		
//displays coins for Euro	
void DisplayCoinEuro (int a, int b, int c, int d){
 
	printf("Twenty: %d\n", a);
	printf("Ten: %d\n", b);
	printf("Five: %d\n", c);
	printf("One: %d\n", d);	

	return; 
												 }