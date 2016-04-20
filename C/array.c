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
    char month[10] = "January";
    char month9[10] = "September";
    printf("Month of the year: %s /n", month);
    printf("4th char of Month of the year: %c /n", month[4]);
    printf("4th char of Month of September: %c /n", month9[3]);
    
    return 0;
}
