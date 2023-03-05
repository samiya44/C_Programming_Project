//Perfect number using Function
//argument passed but no return value
# include <stdio.h>
int  PN(int n);
int main()
{

 int i, Number, Sum = 0,n ;

Number=PN(n);
 for(i = 1 ; i < Number ; i++)
  {
   if(Number % i == 0)
     Sum = Sum + i ;
  }

 if (Sum == Number)
    printf("\n %d is a Perfect Number", Number) ;
 else
    printf("\n%d is not the Perfect Number", Number) ;
return 0;
}

int PN(int n)
{
     printf("\n Please Enter any number \n") ;
 scanf("%d", &n) ;
return n;
}
