#include <stdio.h>

int main() {
    int divisor,dividend,quotient,reminder;
    
    printf("Enter dividend and divisor : ");
    scanf("%d%d",&dividend,&divisor);
    
    quotient = dividend / divisor ;
    reminder = dividend % divisor ;
    
    printf("Quotient = %d\nReminder = %d",quotient,reminder);
    
    return 0;
}