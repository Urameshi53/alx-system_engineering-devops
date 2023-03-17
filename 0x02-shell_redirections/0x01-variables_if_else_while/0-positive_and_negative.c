#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
 
  void determine(int n){
    if(n > 0){return 1;}
    else if (n == 0){return 0;}
    else {return 2;}
  }
  
  switch(determine(n)){
    case 1:
      printf("is positive");
      break;
    case 2:
      printf("is negative");
      break;
    default:
      printf("is zero");
  
	return (0);
}
