void primefactor();
int main()
{
    int x;
    printf("enter the number= ");
    scanf("%d",&x);
    primefactor(x);
    return 0;
}
void primefactor(int a)
{
    int i=2,j;
    for(i;a>0;i++)
   { for(i;a%i==0;a=a/i)
       {

        printf(" %d",i);
       }
    }
}
