#include "leap.h"
#include <stdio.h>

bool leap_year(int year){
    if (year%4 == 0 && year%100 != 0){
        printf("True\n");
        return true;
    }else if(year%100 == 0 && year%400 == 0){
        printf("True\n");
        return true;
    }else{
        printf("False\n");
        return false;
    }
}