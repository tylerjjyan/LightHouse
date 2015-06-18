//
//  main.c
//  Assignment 1: FizzBuzz
//
//  Created by Tyler Yan on 2015-06-18.
//  Copyright (c) 2015 Foodee. All rights reserved.
//

#include <stdio.h>
int main(int argc, const char * argv[]) {
    
    int x = 1;
    while (x <= 100)
    {
        if ((x % 3 == 0) && (x % 5 == 0))
            printf("FizzBuzz");
        else if (x%3 ==0)
            printf("Fizz");
        else if (x%5 ==0)
            printf("Buzz");
        else
            printf("%i",x);
        x++;
        
    }
}