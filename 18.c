#include<stdio.h>
#include<string.h>

int main(){
     char language;
    char en[6];
    char vn[9];
    char spa[5];


scanf("%c",&language);
printf("language selection:");

switch (language)
{
case "en":
    printf("Hello",en);
    break;
    case "spa":
    printf("Hola",spa);
    break;

default:
printf("xin chao",vn);
    break;
}
    return;
}