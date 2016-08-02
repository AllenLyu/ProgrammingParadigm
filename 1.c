#include <stdio.h>
//#define a (x+1)

typedef struct yellow{
    short a;
    short b;
} yellow;


int main(){
//    printf("hello world");

    yellow y;
    y.a = 4;
    y.b = 22;



    ((yellow *)&(y.b))->a = 44;
    ((yellow *)&(y.b))->b = 23;


    int array[10];
    array[10] = 10;
    *(array+3) = 3;
    printf("%d",array[10]);
}