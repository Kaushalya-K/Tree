#include <stdio.h>
#include <stdlib.h>
//tree recursion
int main()
{
   fun(3);
   return 0;
}
void fun(int n)
{

    if(n>0)
    {
         printf("%d ",n);
        fun(n-1);
        fun(n-1);
    }
}
//static variable
int main()
{
    int r;
    r=fun(5);
    printf("%d\n",r);
    r=fun(5);
    printf("%d",r);
    return 0;
}
 int x;
int fun(int n)
{
    //static int x=0;
    if(n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

