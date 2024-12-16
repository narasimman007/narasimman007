#include<stdio.h>
int main()
{
int phy,che,mat,bio,cs;
float percentage;
printf ("enter the five subject marks:");
scanf ("%d %d %d %d %d",&phy,&che,&mat,&bio,&cs);
percentage=(phy+che+mat+bio+cs)/5;
printf ("percentage = %.2f\n",percentage);
if (percentage>=90)
{
printf ("grade A");
}
else if (percentage>=80)
{
printf ("grade B");
}
else if (percentage>=70)
{
printf ("grade C");
}
else if (percentage>=60)
{
printf ("grade D");
}
else if (percentage>=50)
{
printf ("grade E");
}
else
{
printf ("fail");
}
return 0;
}
