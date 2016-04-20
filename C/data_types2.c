//
//  main.c
//  C programming Test
//
//  Created by Ronald McLean on 2016-04-19.
//  Copyright © 2016 Treehouselabs. All rights reserved.
//

#include <stdio.h>

int main() {
    int i=0;
    
    //Characters in C
    int number = 3;
    char letter = 'a';
    char bracket = '[';
    printf("Hello");
    
    printf("Number: %d, Letter: %c, Bracket: %c \n", number,letter, bracket);
    
    //Numbers in c
    int value = 6;
    float floatingNumber = 50.0;
    printf("integer: %d, floating: %.1f \n", value, floatingNumber);
 
    
    //String concatenation
    char string1[20], string2[20], string3[40];
    int u=0, j=0;
    printf("please enter first string : \n");
    scanf("%s", &string1);
    printf("please enter second string : \n");
    scanf("%s", &string2);
    while (string1[u] != '\0' ) {
        string3[u] = string1[u];
        u++;
    }
    while (string2[j] != '\0' ) {
        string3[u] = string2[j];
        u++;
        j++;
    }
    string3[u]='\0';
    printf("The concatenated string is :%s \n", string3);
    getchar();
    
    //Add to  numbers in C
    int v = 5;
    int e = 10;
    int r = v + e;
    printf("Addition result: %d \n", r);
   
    return 0;
    
}
