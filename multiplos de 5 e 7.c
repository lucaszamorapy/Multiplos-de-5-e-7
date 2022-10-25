/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
int i,n;

printf("Informe um numero inteiro: ");
scanf ("%i",&n);

for (i=0;i<=n;i++)
{
    if(i%5==0)
    {
    printf("\n %i numero multiplo de 5", i);
    }
    if(i%7==0)
    {
    printf("\n %i numero multiplo de 7", i);
    }
    else
    {
    printf("\n %i nao e multiplo de 5 e 7",i);
    }

}
return 0;
}
