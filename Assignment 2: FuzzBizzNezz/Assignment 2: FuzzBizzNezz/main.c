//
//  main.c
//  Assignment 2: FuzzBizzNezz
//
//  Created by Tyler Yan on 2015-06-18.
//  Copyright (c) 2015 Foodee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int Fuzz, Bizz, Nezz;
    //Enter Values for the 3 integers
    
    for (int x=1; x<=Nezz; x++){
        
            if (x%Fuzz==0 && x%Bizz==0)
                printf("FuzzBizz");
        
            else if (x%Fuzz==0)
                printf("Fuzz");
            else if (x%Bizz==0)
                printf("Bizz");
            else
                printf("%i",x);
        
    }

    
    
}
