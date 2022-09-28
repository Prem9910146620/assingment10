int digit();
int main()
{
    int x,y;
    printf(" \n yes=1 \n no=0 \n");
    printf("enter  two number \n ");
    scanf("%d%d",&x,&y);
    digit(x,y);
    printf("digit %d",digit(x,y));
    return 0;

}

int digit(int a,int c)
{  int b;
 for(a;a>0;a=a/10)
 {  b=a%10;
    if(c==b)
    break;
 }
 if(c==b)
  return 1;
 else
  return 0;

}
