#include <stdio.h>

int main(){
    unsigned int n;
    scanf("%u", &n);
    
    unsigned int sum = 0;
    for (unsigned int i = 1; i < n+1; i++){
        sum += i;
    }
    
    printf("%u", sum);
    
    return 0;
}