#include <stdio.h>

int main(){
    int a, b;
    scanf("%d\n%d", &a, &b);
    
    int fd = b%10;
    int sd = (b%100 - fd)/10;
    int td = (b - sd*10 - fd)/100;
    
    printf("%d\n", a*fd);
    printf("%d\n", a*sd);
    printf("%d\n", a*td);
    printf("%d\n", a*b);
    
    return 0;
}