#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int);

{float pi=1.0;
for (int i=1;i<n; i++)
{
int m;
m=4.0*i*i;
pi=(float) ((pi*m)/(m-1));
}
pi=pi *2.0;
return pi;
}



