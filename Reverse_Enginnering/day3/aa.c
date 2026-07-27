#include<stdio.h>
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
    {
        printf("a is greater");
    }
    else if(b>a)
    {
        printf("b is greatere");
    }
    else{
        printf("both are equal");
    }
    return 0;
}