#include<stdio.h>
int main()
{
    float weight,height,bmi;
    printf ("enter your weight:\n");
    scanf ("%f",&weight);
    printf ("enter your height:\n");
    scanf ("%f",&height);
    bmi=weight/(height*height);
    if (bmi<18.5)
    {
        printf ("your bmi is %2f.you are under weight\n",bmi);
    }
    else if (bmi>=18.5 && bmi<=24.9)
    {
        printf ("your bmi is %2f.you have normal weight\n",bmi);
    }
    else if (bmi>=25 && bmi<=29.9)
    {
        printf ("your bmi is %2f.you are over weight\n",bmi);
    }
    else 
    {  
        printf ("your bmi is %2f.you are obese\n",bmi);
        
    }
    return 0;
}
