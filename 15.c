#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
    char name;
    int age;
    char phonenumber;
    int date;
    int month;
    int year;
    char gender;

    printf("Full name:");
    scanf("%s",&name);
    gets(&name);
   printf("Age:");
   scanf("%d",&age);
   printf("phone number: ");
   scanf("%d",&phonenumber);
   printf("date of birth : ");
    scanf("%d/%d/%d", &date, &month, &year);
 printf("Enter your gender:");
 scanf("%s", &gender);



  
  return 0;
}







