
void numbers(int);
int main()
{ int x;
printf("enter the number \n ");
scanf("%d",&x);
     numbers(x);
    return 0;
}
 void numbers(int n)
 { int b=1,c=1;
     for(b;b<=n;b++)
       {
     printf(" %d",c);
     c=c+2;
       }
 }
