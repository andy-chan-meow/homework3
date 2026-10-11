#include <stdio.h>
#include <string.h>
int main(){
    char name[20];
    scanf("%s", name);
    int len = strlen(name);
   
    char m[21] = "";
    for (int i = 0 ; i < (20-len)/2  ; i++){
        m[i] = ' ';
    }
    for (int i = (20-len)/2  ; i < (20-len)/2  + len ; i++){
        m[i] = name[i - ((20-len)/2 )];
    }
    for (int i = (20-len)/2  + len ; i < 20 ; i++){
        m[i] = ' ';
    } 
    printf("\"%s\"\n",name);
    printf("\"%*s\"\n", 20, name);
    printf("\"%-*s\"\n", 20, name);
    printf("\"%s\"\n", m);
return 0;
}