#include <stdio.h>  
int add(int,int);  
typedef int (*ip)(int,int);  
int main()  
{  
   int a,b;  
   //int (*ip)(int,int);  
   int result;  
   printf("Enter the values of a and b : ");  
   scanf("%d %d",&a,&b);  
   ip afunc = add;  
   result=afunc(a,b);  
   printf("Value after addition is : %d",result);  
    return 0;  
}  
int add(int a,int b)  
{  
    int c=a+b;  
    return c;  
}  