//
//  main.c
//  C-FunctionExercises
//
//  Created by Darren Hardy on 07/03/2017.
//  Copyright © 2017 Darren Hardy. All rights reserved.
//

#include <stdio.h>


int main()
{
    
    int FindMinimum ();
    
    return 0;
}

/*-------------------------------------------------------*/


/*output*/    int FindMinimum(int x, int y)    /*input*/

{
    
    printf ("input a number\n");
    scanf ("%d", x);
    printf ("you chose\n", x);
    
    printf ("input another number\n");
    scanf ("%d", y);
    printf ("you chose\n", y);
    
    
    return 0;
}

/*-------------------------------------------------------*/

int GetNumberFromKeyboard(int number)

{
    printf ("input a number\n");
    scanf ("%d", &number);
    printf ("you chose\n", number);
    
    return 0;
}