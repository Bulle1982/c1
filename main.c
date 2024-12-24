#include <stdio.h>

int main() {
  // Create variables of different data types
  int total_trades = 100;
  float total_winners = 0.6;
  float total_losers = 0.4;
  
  int account_size = 10000;
  float risk_per_trade = 0.01;
  float total_sl_in_dollars = account_size * risk_per_trade;
  float profit_per_trade = 0.03;
  float total_tp_in_dollars = account_size * profit_per_trade;
  char currency = '$';
  
  float total_profits = account_size * total_winners * total_trades * profit_per_trade;
  float total_losses = account_size * total_losers * total_trades * risk_per_trade;
  
  float net_profits = total_profits - total_losses;

  // Print variables
  printf("Amount of money in the Account: %d\n", account_size);
  printf("Loss per trade: %.2f\n", risk_per_trade, currency);
  printf("Loss per trade in dollars = %.2f\n", total_sl_in_dollars, currency);
  printf("Profit per trade: %.2f\n", profit_per_trade);
  printf("Profit per trade in dollars: %.2f\n ", total_tp_in_dollars, currency);
  printf("Net Profit for the period: %.2f\n", net_profits, currency);


  int state = 1;
  
  switch (state) {
  	case 1:
    	printf("Puntland\n");
        break;
    case 2:
    	printf("Somaliland\n");
        break;
        
    case 3:
    	printf("Jubbaland\n");
        break;
        
    case 4:
    	printf("Galmudug\n");
        break;
        
    case 5:
    	printf("Koonfurgalbeed\n");
        break;
        
    case 6:
    	printf("Hirshabeelle\n");
        break;
        
    case 7:
    	printf("SCC Khaatumo\n");
        break;
        
    default:
    	printf("There are only 7 states in Somalia");
    	
  }

  /* 
Sverige är för närvarande (1998) indelat i 21 län. Gängse bokstavsbeteckningar, fullständiga namn samt residensstäder anges nedan:

AB - Stockholms län - Stockholm
C - Uppsala län - Uppsala
D - Södermanlands län - Nyköping
E - Östergötlands län - Linköping
F - Jönköpings län - Jönköping
G - Kronobergs län - Växjö
H - Kalmar län - Kalmar
I - Gotlands län - Visby
K - Blekinge län - Karlskrona
LM - Skåne län - Malmö
N - Hallands län - Halmstad
O - Västra Götalands län - Göteborg
S - Värmlands län - Karlstad
T - Örebro län - Örebro
U - Västmanlands län - Västerås
W - Dalarnas län - Falun
X - Gävleborgs län - Gävle
Y - Västernorrlands län - Härnösand
Z - Jämtlands län - Östersund
AC - Västerbottens län - Umeå
BD - Norrbottens län - Luleå


*/
  int län = 13;
  
  switch (län) {
  	case 1:
    	printf("Stockholms län\n");
        break;
        
    case 2:
    	printf("Uppsala län\n");
        break;
   
    case 3:
    	printf("Södermanlands län\n");
        break;
        
    case 4:
    	printf("Östergötlands län\n");
        break;
        
    case 5:
    	printf("Jönköpings län\n");
        break;
    
    case 6:
    	printf("Kronobergs län\n");
        break;
    
    case 7:
    	printf("Kalmar län\n");
        break;
    
    case 8:
    	printf("Gotlands län\n");
        break;
    
    case 9:
    	printf("Blekinge län\n");
        break;
    
    case 10:
    	printf("Skåne län\n");
        break;
    
    case 11:
    	printf("Hallands län\n");
        break;
    
    case 12:
    	printf("Västra Götalands län\n");
        break;
    
    case 13:
    	printf("Värmlands län\n");
        break;
    
    case 14:
    	printf("Örebro län\n");
        break;
    
    case 15:
    	printf("Västmanlands län\n");
        break;
    
    case 16:
    	printf("Dalarnas län\n");
        break;
    
    case 17:
    	printf("Gävleborgs län\n");
        break;
    
    case 18:
    	printf("Västernorrlands län\n");
        break;
    
    case 19:
    	printf("Jämtlands län\n");
        break;
    
    case 20:
    	printf("Västerbottens län\n");
        break;
    
    case 21:
    	printf("Norrbottens län\n");
        break;
    
   default:
   printf("Det finns bara 21 län i Sverige!\n");
        
   
       
  }

  return 0;
}
