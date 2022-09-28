int fact();
int main()
{
    int i;
    printf("enter a number");
    scanf("%d",&i);
    fact(i);
    printf("factorial of %d is %d",i,fact());
    return 0;

}
int fact(int a)
{  int b,c=1;
 for(b=1;b<=a;b++)
 { c=c*b;

 }
  return c;
}
