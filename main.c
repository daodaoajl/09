#include <stdio.h>
#include <stdlib.h>

#define N_STUDENT 5

int main(void)
{
  int i;
  int grade[N_STUDENT];
  
  printf("input 5 scores : ");
  
  for(i=0;i<N_STUDENT;i++)
  
      scanf("%d", &grade[i]);
      
  for(i=0;i<N_STUDENT;i++)
   
      printf("grade[%i] = %d\n" , i, grade[i]);// Ãâ·Â 
  
  system("PAUSE");	
  return 0;
}
