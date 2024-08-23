int InputCurrency ();
int InputMoney (int a, int max, int min);
void SetCoinValues (int currency, int currency1_coin1, int currency1_coin2, int currency1_coin3, int currency1_coin4, 
								  int currency2_coin1, int currency2_coin2, int currency2_coin3, int currency2_coin4, 
								  int currency3_coin1, int currency3_coin2, int currency3_coin3, int currency3_coin4,
					int* coin1, int* coin2, int* coin3, int* coin4);
void ReturnCoins (		int amount_money, int coin1, int coin2, int coin3, int coin4,
					int* num_coin1, int* num_coin2, int* num_coin3, int* num_coin4);			
					
void PrintResult (int coin1, int coin2, int coin3, int coin4,
					int* num_coin1, int* num_coin2, int* num_coin3, int* num_coin4);					
					
int AskContinue ();
					
					




					
int MoneyAU$ ();
int MultipleOf5();
int MoneyUS$_Euro ();
void ChooseCalculation (int a, int b);
void ComputeCoinAU$ (int a);
void DisplayCoinAU$ (int a, int b, int c, int d);
void ComputeCoinUS$ (int a);
void DisplayCoinUS$ (int a, int b, int c, int d);
void ComputeCoinEuro (int a);
void DisplayCoinEuro (int a, int b, int c, int d); 