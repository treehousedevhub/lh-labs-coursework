//
//  main.c
//  C programming Test
//
//  Created by Ronald McLean on 2016-04-19.
//  Copyright © 2016 Treehouselabs. All rights reserved.
//

#include <stdio.h>
//Introduction to character array in C
int main() {
    //If statement example
    int target = 10;
    if (target == 10) {
        printf("Target is equal to 10 \n");
    }
  
    //If else
    int target2 = 3;
    if (target2 > 5) {
        printf("Target is greater than 5 \n");
    } else {
        printf("Target is less than 5 \n");
    }
    
    //Nesting if else
    int peanuts_eaten = 22;
    int peanuts_in_jar = 100;
    int max_peanut_limit = 50;
    
    if (peanuts_in_jar > 80)
    {
        if (peanuts_eaten < max_peanut_limit)
        {
            printf("Take as many peanuts as you want!\n" );
        }
    }
    else
    {
        if (peanuts_eaten > peanuts_in_jar)
        {
            printf("You can't have anymore peanuts!\n" );
        }
        else
        {
            printf("Alright, just one more peanut.\n" );
        }
    }
    
    //Switch case
    int mystery_number = 7;
    int number_chosen;
    
    printf("Win a prize everytime!\n");
    printf("\n");
    printf("Pick a number between: 1 - 5\n");
    scanf("%d", &number_chosen);
    printf("Congratulations! You won a...\n");
           
    switch(number_chosen)
    {
        case 1:
            printf("Trip to Barbados!");
            break;
        case 2:
            printf("A bicycle!");
            break;
        case 3:
            printf("A meal at Timmies!");
            break;
        case 4:
            printf("Season pass to Wonderland!");
            break;
        case 5:
            printf("Five nights at DisneyLand!");
            break;
    }
    
    return 0;
}
