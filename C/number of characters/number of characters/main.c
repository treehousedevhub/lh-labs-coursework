//
//  main.c
//  number of characters
//
//  Created by Ronald McLean on 2016-04-21.
//  Copyright © 2016 Treehouselabs. All rights reserved.
//

#include <stdio.h>
int main(){
    //challenge string input from user
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
    string3[u] = '-';
    u++;
    while (string2[j] != '\0' ) {
        string3[u] = string2[j];
        u++;
        j++;
    }
    string3[u]='\0';
    printf("The concatenated string is :%s \n", string3);
 
    
    //count the number of characters
    int count = 0;
    for (int t=0; string3[t] !='\0'; t++) {
        count = count +1;
    }
    printf("Total string characters is :%d \n", count);
    printf("test");
    
    
    
    return 0;
}
