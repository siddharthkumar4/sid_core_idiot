
#include<stdio.h>
int main()
{
  float a,b,c,d;
  printf("%f%f",a,b);
  scanf("%f%f",&a,&b);
  if(a>b)
  {
      c=a-b;
      printf("%f",c);

  }
else
{
 d=b-a;
 printf("%f",d);
}
return 0;
}

