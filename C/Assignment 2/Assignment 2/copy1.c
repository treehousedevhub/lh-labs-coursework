//
//  copy1.c
//  Assignment 2
//
//  Created by Ronald McLean on 2016-04-21.
//  Copyright © 2016 Treehouselabs. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char play;
    char choice;
    
    printf("Welcome to Two doors.\n");
    printf("Would you like to play? (y/n): ");
    scanf("%c", &play);
    
    if (play = 'y') {
        
        print("\nYou are a prisoner in a room with 2 doors and 2 guards.\n");
        print("One of the doors will guide you to freedom and behind the other is a hangman --you don't know which is which.\n");
        print("One of the guards always tells the truth and the other always lies. You don't know which one is the truth-teller or the liar either.\n");
        print("You have to choose and open one of these doors, but you can only ask a single question to one of the guards.\n");
        print("What do you ask so you can pick the door to freedom?\n\n");
        print("\t1.Ask the truth-guard to point to the door of doom.\n");
        print("\t2.Ask the liar-guard to point to the door of doom.\n");
        print("\t3.Doesn't matter which one you pick.\n");
        scan("%f", choice);
        
        char answer = "No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n";
        switch (choice) {
            case 1:
                print("c", answer);
                break;
            case 2:
                print("c", answer);
                break;
            case 3:
                print("c", answer);
                break;
            default:
                break;
        }
    }
    
    return 1;
}
