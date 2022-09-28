int si();
int main()
{ int x,y,z,m;
  printf(" enter three number \n 1. amauont \n 2. rate of interest \n 3. time \n ");
  scanf("%d%d%d",&x,&y,&z);
    m=si(x,y,z);
    printf("total amauont is %d",m);
    return 0;
}
int si(int a,int b,int c)
{
    int d;
    d=(a*b*c)/100;
    a=a+d;
    return a;
}
