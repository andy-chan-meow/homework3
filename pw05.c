#include <stdio.h>
#include <string.h>
int main(){
    char c;
    scanf("%c",&c);
    printf("CODE_DEC: %d\n", c);
    printf("CODE_HEX: %x\n", c);
    printf("CODE_OCT: %o\n", c);  
    printf("UPPER: %c\n", c-32);
    printf("PREV: %c\n", c-1);
    printf("NEXT: %c\n", c+1);

    return 0;
}