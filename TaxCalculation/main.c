//
//  main.c
//  TaxCalculation
//
//  Created by Arifeen Mahmud on 15/2/21.
//  Copyright © 2021 Arifeen Mahmud. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
 double income, tax;
    printf("Enter your Income: ");
    scanf("%lf", &income);
    if (income<10000)
    tax = 0.0;
    else if (income>=10000 && income<20000)
    tax = income * .1;

    else if (income>=20000 && income<50000)
    tax = income * .2;

    else {
    tax = income *.25;
    tax = tax + tax * .1;
    }
    printf("The payable tax is $%0.2lf \n", tax);
    return 0;
}
