#include <stdio.h>
#include <string.h>

int main(){
    char exId[50];
    scanf("%s", &exId);
    
    char str[strlen(exId)];
    strcpy(str, exId);
    strcat(str, "??!");
    printf("%s", str);
    
    return 0;
}