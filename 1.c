#include <stdio.h>

int x;
int total;
total = 0;

main()
{
  for (x=0;x<1000;x++)
    {
      if (!(x % 3)) {
        //printf("%d\n",x);
	total += x;
      }
      else if (!(x % 5)) {
	//printf("%d\n",x);
	total += x;
      }
    }
  printf("%d\n",total);

}
