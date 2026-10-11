#include <stdio.h>
#include <string.h>
int main(){
    char word1[15];
    char word2[15];
    scanf("%s %s",word1,word2); //1 "%s" = 1 word, пробел = \t or \n, поэтому при вводе 2 слов через пробел запишется только 1
    printf("%s-%s\n", word1,word2);
    printf("TOTAL_LEN: %d\n",(int)strlen(word1)+(int)strlen(word2));
    return 0;
}