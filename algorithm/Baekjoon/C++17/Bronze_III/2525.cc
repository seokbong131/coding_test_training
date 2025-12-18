#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d\n%d", &a, &b, &c);
    
    int c_h, c_m;
    c_h = c / 60;
    c_m = c % 60;
    
    if ((b + c_m) < 60) b += c_m;
    else{
        b = b + c_m - 60;
        a += 1;
    }
    
    if ((a + c_h) < 24) a += c_h;
    else a = (a + c_h) % 24;
    
    printf("%d %d", a, b);
    
    return 0;
}