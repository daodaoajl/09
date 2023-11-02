#include <stdio.h>
#include <stdlib.h>

#define N_STUDENT 5

int main(void)
{
  int i,average, sum;
  int grade[N_STUDENT];
  
  sum = 0;
  
  printf("input 5 scores : ");
  
  for(i=0;i<N_STUDENT;i++)
  {
      scanf("%d", &grade[i]);
      sum += grade[i];
  }
  
  average = sum / N_STUDENT;
  printf("score average : %i\n", average);
  
  system("PAUSE");	
  return 0;
}
