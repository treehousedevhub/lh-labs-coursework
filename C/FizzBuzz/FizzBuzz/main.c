//
//  main.c
//  FizzBuzz
//
//  Created by Ronald McLean on 2016-04-21.
//  Copyright © 2016 Treehouselabs. All rights reserved.
//
#include <stdio.h>
int main(){
    //FizzBuzz
    printf("The following numbers between 1-100 are multiples of 3\n");
    for (int i = 1; i <+ 100; i++) {
        if (i % 3 ==0) {
            printf("%d\t", i);
        }
        
    }
    
    
    return 0;
}