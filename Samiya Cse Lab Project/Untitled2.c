//Perfect number using Function
//no argument but return value
#include <stdio.h>
int FNC();
int main ()
{
    FNC();
    return 0;
}
int FNC()
{
    int t1=0,t2=1,nextterm =t1+t2,n,i;
n= FNC();

printf("Fibonacci Series :%d,%d",t1,t2);
    for (i=2;i<n;i++)
    {


        printf(",%d",nextterm);
    t1=t2;
    t2=nextterm ;
    nextterm =t1+t2;
    return 0;
    }
    int FNC()
    {


 printf("Number of terms:");
    scanf("%d",&n);
    return n;
}}
