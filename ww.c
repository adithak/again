#include <stdio.h>
int main()
{
int num, w = 0, rec, i;
scanf("%d", &num);
 i = num;
  while( num!=0 )
    {
        re = num%10;
        w = w*10 + rec;
        num /= 10;
    }
 printf("%d",w);
 return 0;
}
