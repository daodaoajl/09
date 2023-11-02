#include <stdio.h>
#include <stdlib.h>

#define N_STUDENT 5


int main(void)
{
  int i;
  int grade[N_STUDENT];
  
  /*grade[0] = 10;
  grade[1] = 20;
  grade[2] = 30;
  grade[3] = 40;
  grade[4] = 50;*/
  
  for(i=0;i<N_STUDENT;i++)
  
      grade[i] = (i+1)*10;// 위의 주석 처리된 코드를 for문으로  
      
  for(i=0;i<N_STUDENT;i++)
   
      printf("grade[%i] = %i\n" , i, grade[i]);// 출력 
  
  system("PAUSE");	
  return 0;
}
