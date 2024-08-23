//Jaeden Mah
//34317578
#include <stdio.h>

#include "coinCalculation.h"

int main(){
	const int min_input = 1;
	const int max_input = 95;
	
	int currency, money;
	
	int choice = 1;
	
	int coin1, coin2, coin3, coin4;
	
	int num_coin1, num_coin2, num_coin3, num_coin4;
	
	//Declare AU$ coins
	const int AU_COIN1 = 50;
	const int AU_COIN2 = 20;
	const int AU_COIN3 = 10;
	const int AU_COIN4 = 5;
	
	//Declare US$ coins
	const int US_COIN1 = 50;
	const int US_COIN2 = 25;
	const int US_COIN3 = 10;
	const int US_COIN4 = 1;
	
	//Declare Euro coins
	const int EURO_COIN1 = 20;
	const int EURO_COIN2 = 10;
	const int EURO_COIN3 = 5;
	const int EURO_COIN4 = 1;
	
	
	
	while (choice == 1){
		
		//Ask user to choose currency
		currency = InputCurrency();
		printf("You chose currency %d\n", currency);
		
		//Ask user to enter amount of money
		money = InputMoney(currency, max_input, min_input);
		printf("You entered %d cents\n", money);
		
		//Set the values of the 4 coins depending on what currency what chosen
		SetCoinValues(currency, AU_COIN1, AU_COIN2, AU_COIN3, AU_COIN4, US_COIN1, US_COIN2, US_COIN3, US_COIN4, EURO_COIN1, EURO_COIN2, EURO_COIN3, EURO_COIN4, 
						&coin1, &coin2, &coin3, &coin4);
		
		
		//Calculates number of coins to display to user
		ReturnCoins(money, coin1, coin2, coin3, coin4, &num_coin1, &num_coin2, &num_coin3, &num_coin4);
		
		
		//Print the results
		PrintResult(coin1, coin2, coin3, coin4, &num_coin1, &num_coin2, &num_coin3, &num_coin4);
		
		
		//Asks if user wants to do again 
		choice = AskContinue ();
		
		
	}			
					
				   
return (0);
			}