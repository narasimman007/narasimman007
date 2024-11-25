#include<stdio.h>
int main()
{
    double a=2,b=5,c=5;
    if(a+b<=c||a+c<=b||b+c<=a)
    printf ("these sides don't from a valid trayangle.\n");
    if (a==b&&b==c)
    printf ("the trayangle is equal\n");
    if ((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a))
    printf ("the trayangle is osceles.\n");
    if (a!=b && a!=c && b!=c)
    printf("the trayangle is scalene.\n");
    return 0;
}

