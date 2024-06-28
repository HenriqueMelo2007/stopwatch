#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  clock_t startTime, endTime;

  double elapsedTime;

  startTime = clock();

  printf("Timer started. Press any key to stop.\n");
  getchar();

  endTime = clock(); 
  elapsedTime = (double)(endTime - startTime) / CLOCKS_PER_SEC;

  printf("Elapsed time: %.2f seconds.\n", elapsedTime);
  
  return 0;
}
