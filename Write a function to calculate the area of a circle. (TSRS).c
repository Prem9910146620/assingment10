#include<stdio.h>
float area(float b);
int main()
{ float y,x;

    printf("enter a number ");
    scanf("%f",&y);
   x=area(y);
   printf("area of circle is =%.2f",x);
    return 0;

}
float area(float b)
{ float c=0;
  c=3.14*b*b;

    return (c);
}
