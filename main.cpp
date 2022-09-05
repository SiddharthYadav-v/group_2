#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    // cout<<"The factorial of 5 is "<< factorial(5)<< endl;
    printf("%s", "The factorial of 5 is ");
    printf("%d", factorial(5));
    return 0;
}
