#include <stdio.h>

#define employee "Kristina"
#define badgenumber 123456


int main () {
    printf("Value of employee name: %s\n", employee);
    printf("The employees Badge Number: %d\n", badgenumber); 
    
    #ifdef employee
    printf("Employee is: %s\n", employee);
    #endif
    
    #ifndef person
        printf("Person is not defined!");
    #endif
    
    return 0;
    
