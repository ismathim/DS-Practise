/* WAP that allows for the input of an integer value, doubles it, subtracts 10 and displays the result */

#include <stdio.h>

int main(){
    int a,value;
    printf("Enter a number:");
    scanf("%d",&a);
    value= (2*a)-10;
    
    printf("The result is %d",value);
}
