#include "functions.h"
#include<iostream>

int factorial(int n){
    int a;
    int b;
    if(n<0){
        // std::cout<<"enter a positive number";
        // printf("%s", "Enter a positive number");
        // return 0;
        return -1;
    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
