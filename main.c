#include <stdio.h>
#include <stdlib.h>

#define N_STUDENT 5

int main(void)
{
  int i,average, sum;
  int grade[N_STUDENT];
  int score[N_STUDENT];
  
  sum = 0;
  
  for(i=0;i<N_STUDENT;i++)
      grade[i] = rand() % 100 + 1;
      
  for(i=0;i<N_STUDENT;i++)
      score[i] = grade[i];
  
  for(i=0;i<N_STUDENT;i++)
     printf("score[%i] =%i(grade:%i)\n", i, score[i],grade[i]);
  
  system("PAUSE");	
  return 0;
}
