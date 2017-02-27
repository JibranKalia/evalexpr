#include<stdio.h>
int main(){

  int 	i;
  int 	j; 
  int 	temp;
  int	a[20];
  int 

  i = 1;

  s[7] = {3, 233, 4, 88, 993, 5};


  for (i = 1; i < s; i++)
  {
      temp = a[i];
      j = i - 1;
      while ( (temp < a[j]) && (j >= 0))
	  {
		  a [j + 1 ] = a[j];
          j = j - 1;
      }
      a[ j + 1 ]=temp;
  }

  for(i = 0; i < s; i++)
      printf(" %d",a[i]);

  return 0;
}
