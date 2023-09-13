#include<stdio.h>
int main()
{
    int a=3, b=2;
    int s=(a<b)?(a+b):a*b;
    printf("Conditinal %d \n",s);
    printf("Arithematic %d \n", a+b);
    printf("Relatinal %d \n", a>b);
    printf("Equal to %d \n", a==b);
    printf("Assignment %d \n",a=b);
    printf("Logical NOT %d \n",!(a<b));
    printf("Logical AND %d \n",(a<b)&&(a>b));
    printf("Logical OR %d \n",(a<b)||(a>b));
    return 0;
}
