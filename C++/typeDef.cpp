#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//http://stackoverflow.com/questions/2571831/can-a-function-return-more-than-one-value

typedef struct
{
    int a;
    int b;
}Mystruct;

Mystruct myfun(); 

int main()
{
    char name[30];
    Mystruct ms2;
    ms2 = myfun();
    printf("val1: %d   val2: %d",ms2.a,ms2.b);
    return 0;
}

Mystruct myfun()
{
    int a,b;
    Mystruct ms;

    a = 10;
    b = 20;
    ms.a=a;
    ms.b=b;

    return(ms);
}