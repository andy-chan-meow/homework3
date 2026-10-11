#include <stdio.h>
#include <string.h>
int main(){
    #define l "LinuxDistro"
    const char str[5] = "2026";
    printf("DISTRO: %s\n", l);
    printf("RDATE: %s\n", str);
    printf("STRLEN: %zu\n", strlen(l));
    printf("SIZEOF: %zu\n", sizeof(l));
    return 0;
}