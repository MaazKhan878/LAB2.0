#include<stdio.h>
int main(){
float dollar, exchangeFee, dollarPerPound, totalAmountDollar;
int dollarPerYen;
printf("Enter the amounrt in Dollar:");
scanf("%f",&dollar);
exchangeFee=dollar*0.1;
totalAmountDollar=dollar - exchangeFee;
dollarPerPound = (totalAmountDollar/2) * 0.79;
dollarPerYen = (totalAmountDollar/2) * 127.65;
printf("Half of the Dollar exchange to %g GBP\n",dollarPerPound);
printf("Hal of the Dollar exchange to %d jpy\n",dollarPerYen);
return 0;
}