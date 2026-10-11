#include <stdio.h>
#include <wchar.h>
#include <string.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");

    const char a1[15] = "Пряники";
    const wchar_t a2[15] = L"Пряники";

    printf("char -> sizeof: %zu bytes, strlen: %zu chars\n", sizeof(a1),strlen(a1));
    printf("wchar -> sizeof: %zu bytes, wcslen: %zu chars\n", sizeof(a2),wcslen(a2));
    return 0;
}