//
//  main.c
//  CheckingLeapYear
//
//  Created by Arifeen Mahmud on 15/2/21.
//  Copyright © 2021 Arifeen Mahmud. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    if (year % 4 == 0){
        if (year % 100 == 0){
          if (year % 400 == 0)
            printf("yes this is leap year \n");
            else
             printf("no this is not a leap year\n");
    }
        
    else
    printf("yes, the year is leap year \n");
    }
    
    
    else
    printf("No this is not a leap year \n");

    
    return 0;
}
