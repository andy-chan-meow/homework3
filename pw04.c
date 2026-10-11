#include <stdio.h>
#include <string.h>
int main(){
   char hw[12] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64";
   printf("%s\n",hw);
   printf("STRLEN: %zu\n", strlen(hw));
   printf("SIZEOF: %zu\n",sizeof(hw));
   
    return 0;
}