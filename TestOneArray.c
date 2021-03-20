// Sequence of element, is a one-dimensional array.
#include <stdio.h>

int main()
{
  int scores[] = {90, 70, 50, 80, 60, 85};
  int length = sizeof(scores) / sizeof(scores[0]);
  int i;
  for (i = 0; i < length; i++)
  {
    printf("%d,", scores[i]);
  }
  return 0;
}
