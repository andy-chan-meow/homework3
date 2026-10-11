#include <stdio.h>
int main(){
    int width;
    char text[20];
    scanf("%s %d", text, &width);
    printf("%*s\n", width ,text);
    printf("%-*s\n",width+5,text);

    return 0;
}