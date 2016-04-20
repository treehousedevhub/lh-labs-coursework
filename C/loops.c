//
//  main.c
//  C programming Test
//
//  Created by Ronald McLean on 2016-04-19.
//  Copyright © 2016 Treehouselabs. All rights reserved.
//

#include <stdio.h>
int main() {
    //loop
    int target = 10;
    
    for (int i = 0; i<= target; i++) {
        if (i == target) {
            printf("Hey our target was hit \n");
        } else{
            printf("%d", i);
        }

    }
    
    //Do while
    int a = 10;
    do {
        printf("value of a: %d\n", a);
        a = a + 1;
    } while(a < 20);
    
    //Nested loops
    for (int i = 0; i < 3; i++) {
        printf("-%d\n", i);
        for (int j = 0; j < 3; j++) {
            printf("--%d\n", j);
        }
        
    }
    
    return 0;
}
