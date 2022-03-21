#include <stdio.h>
int i,n;
 
int main()
{
    i=0;
 
 
   scanf ("%d",&n);
if (n>=100)
{
    do{
    n=n-100;
    i++;
}while (n>=100);
}
 
 
    if (n>=20)
{    do {
    n=n-20;
    i++;
}       while (n>=20);}
 
 
 
    if (n>=10)
{ do {
    n=n-10;
i++;
}while (n>=10); }
 
 if (n>=5)
{ do {
   n=n-5;
   i++;
 
}while(n>=5);}
 
if (n>=1)
    {do {
 
 
    n=n-1;
   i++;
 
    }while (n>=1);}
 
 
 printf("%d\n",i);
return 0;
}
