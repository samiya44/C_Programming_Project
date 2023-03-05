//Fibonacci number using Function
//no argument No return value
#include <stdio.h>
void FNC();
int main ()
{
    FNC();
    return 0;
}
void FNC()
{
    int t1=0,t2=1,nextterm =t1+t2,n,i;

    printf("Number of terms:");
    scanf("%d",&n);
printf("Fibonacci Series :%d,%d",t1,t2);
    for (i=2;i<n;i++)
    {


        printf(",%d",nextterm);
    t1=t2;
    t2=nextterm ;
    nextterm =t1+t2;
    }

}
