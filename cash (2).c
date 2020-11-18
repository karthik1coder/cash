#include <stdio.h>
#include <cs50.h>
int main ()

{
float dollars = get_float("How many coins should i give?\n");
int cents = dollars * 100;

int type1 = cents / 25;
int remainder1 = cents % 25;
int type2 = remainder1 / 10;
int remainder2 = remainder1 % 10;
int type3 = remainder2 / 5;
int remainder3 = remainder2 % 5;
printf("give %i \n", type1 + type2 + type3 + remainder3);
}