#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int main(){
wchar_t a[30];
wchar_t b[30];
wchar_t c[30];
wscanf(L"%ls %ls %ls", a, b, c);
wprintf(L"%-*ls|%*ls|%.5ls\n", 15, a, 20, b , c);
return 0;
}