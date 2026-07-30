/*
  switch(expression)
  {
  case value1:
  // code 
  break;
  
  case value2:
  //code 
  break;
  
  cae value3:
  //code
  break;
  default:
  //code if no case matches 
  }
*/\
#include<stdio.h>
int main(){
    int day;
    scanf("%d",&day);
    switch (day)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("friday");
        break;
        case 6:
        printf("saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("invaild day");

    }
}