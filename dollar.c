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
return 0;
}