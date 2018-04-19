#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    float total_cost;
    float meal_cost;
    float tip;
    float tax;
    
    total_cost = 0;
    scanf("%f%f%f",&meal_cost,&tip,&tax); /* Read from stdin & save to variables */
    tip = tip * meal_cost/100;
    tax = tax * meal_cost/100;
    total_cost = meal_cost + tip + tax;
    printf("The total meal cost is %d dollars.", (int)round(total_cost));
    return 0;
}