#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");
    wchar_t user[50];
    wscanf(L"%ls", user);
    wprintf(L"Агент %ls авторизован в системе\n", user);
    return 0;
}