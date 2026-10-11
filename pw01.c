#include <stdio.h>
#include <string.h>
int main(){
    char arr[20] = "SibSUTIS"; //ASCII: 1 char = 1 byte
    printf("SIZEOF: %zu\n",sizeof(arr));
    printf("STRLEN: %zu\n",strlen(arr));
    printf("FREE_BYTES: %d\n", 19 - (int)strlen(arr));
    
    char arr1[20] = "СибГУТИ"; // UTF-8: 1 cyrillic char = 2 byte 
    printf("SIZEOF: %zu\n",sizeof(arr1));
    printf("STRLEN: %zu\n",strlen(arr1));
    printf("FREE_BYTES: %d\n", 19 - (int)strlen(arr1));
    return 0;
}