#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(void) {
  char arr[10];
  char brr[10];
  int i,j,count=0,n1,n2,l;
  scanf("%s",arr);
  scanf("%s",brr);
  n1=strlen(arr);
  n2=strlen(brr);
  if(n1<n2)
  {
    l=n2;
  }
  else
  {
    l=n1;
  }
   //printf("%d",l);
  for(i=0;i<l;i++)
  {
    if(arr[i]==brr[i])
    {
      count++;
    }
  }
  printf("%d",count);
  for(j=count;j<l;j++)
  {
    arr[j]=brr[j];
  }  
  printf("%s",arr);
  printf("%d",l-count);
  return 0;
}
