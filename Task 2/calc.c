/*!
@file       calc.c
@author     Timothy Lee (timothykexin.lee@digipen.edu.sg)
@course     CS120
@section    Task 2
@lab        Lab 2
@date       17/09/2021
@brief      This file contains code that takes the input value and returns 
            the squared or cubed or negative value based on the main code's requirement.
*//*___________________________________________________________________________________*/

#include "calc.h"
int sq(int x) {
    return x * x;
}

double cube(double x) {
    return x * x * x;/* Calculate cube of x here */
}

double minus(double x){
    return -x;/* Add code to return negation of x */
}
