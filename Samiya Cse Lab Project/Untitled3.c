//Perfect number using Function
//argument passed but no return value
//Fibonacci number using Function
//no argument but return value
#include <stdio.h>
int FNC(int n);
int main ()
{
int t1=0,t2=1,nextterm =t1+t2,n,i;
 printf("Number of terms:");
    scanf("%d",&n);

printf("Fibonacci Series :%d,%d",t1,t2);
FNC( n);
    return 0;
}
int FNC(int n)
{


    int t1=0,t2=1,nextterm =t1+t2,i;

    for (i=2;i<n;i++)
    {


        printf(",%d",nextterm);
    t1=t2;
    t2=nextterm ;
    nextterm =t1+t2;
    }

}


