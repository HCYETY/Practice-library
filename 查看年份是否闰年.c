#include <stdio.h>
void main()
{int year,leap;
printf ("Which year?");
scanf ("%d",&year);
if (year %400==0)leap=1;
else
    if(year%4==0)
       if(year%100==0)
          leap=0;
       else leap=1;
    else leap=0;
if(leap==1)
   printf("%d��������\n",year);
else 
   printf("%d�겻������\n",year);
}
