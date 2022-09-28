
int s();
int main()
{ int x,m;
  printf(" enter a number ");
  scanf("%d",&x);
    m=s(x);
    printf("\n return %d",m);
    return 0;
}
int s(int a)
{ int d;

    d=a%2;
    if(d==0)
    return 1;
    else
        return 0;
}
