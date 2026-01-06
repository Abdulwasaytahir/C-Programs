// Address of value
#include <stdio.h>

int main(){
    int i=12;
    int* j = &i;
    printf("The address of i is: %p\n", &i);
    printf("The address of i is: %p\n", j);
    return 0;
}


// Value at address
#include <stdio.h>
int main (){
    int i = 23;
    int* j = &i;
    printf("The value at address j is: %d", *j);
    return 0;
}


// Pointer to Pointer
#include <stdio.h>
int main (){
    int i = 65;
    int* j = &i;
    int** k = &j;
    printf("The address of i is %p\n", j);
    printf("The address of j is %p", k);
}



