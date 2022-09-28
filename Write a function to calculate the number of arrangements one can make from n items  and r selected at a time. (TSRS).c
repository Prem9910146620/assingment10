
int fact();
int main()
{
    int n,r;
    printf("enter two number");
    scanf("%d%d",&n,&r);
    fact(n,r);
    printf("permutation is %d",fact(n,r));
    return 0;

}
int fact(int n,int r)
{  int b,c=1,d=1,e;

 for(b=1;b<=n;b++)
 { c=c*b;
 } for(b=1;b<=r;b++)
 {  d=d*b;
     }
     e=c/d;
  return e;
}
