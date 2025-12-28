#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    
    int n;
    scanf("%d", &n);
    
    int sum = 0;
    for (int i = 0; i < n; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        
        sum += a * b;
    }
    
    if (x == sum) printf("Yes\n");
    else printf("No\n");
    
    return 0;
}